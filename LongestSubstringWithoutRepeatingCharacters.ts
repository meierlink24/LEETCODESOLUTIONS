/*

*Name: Longest Substring Without Repeating Characters
*Description:Given a string s, find the length of the longest without duplicate characters. 
*
* */




function lengthOfLongestSubstring(s: string): number {
  const scanner: string[] = []
  let longest = 0

  for (const char of s) {
    const possibleIndex = scanner.indexOf(char)

    if (possibleIndex !== -1) { scanner.splice(0, possibleIndex + 1) }
    scanner.push(char)
    longest = Math.max(longest, scanner.length)
  }

  return longest
}
