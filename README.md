# [Problem G: Song Preferences](https://nbhspc21.kattis.com/problems/nbhspc21.songpreferences)

Music streaming sites allow people to listen to some songs. Sometimes, there are even recommendations for other songs based on what seem to be your song preferences. Those are based on what other people with similar taste as you are listening to. A key point here is the ability to identify people with similar taste: this requires measuring the difference between two people’s preferences.

A simple way to do this is for two people to rank the same set of songs (in order of preference), and then to count “inversions” (i.e., the number of pairs of songs (A, B) for which one of these persons prefer A while the other prefers B). Let’s assume that there are 5 songs to rank. For simplicity, we will just assign a number between 1 and 5 to each of these songs. Then let’s say that I rank these songs in the following order: 3, 1, 5, 2, and then 4 (from most to least preferred). Also, let’s say that another person rank the same songs in the following order: 1, 5, 3, 4, 2. Intuitively, you could say that this person has a somewhat similar taste as mine. Indeed, the similarity measure is very low, as there are only 3 inversions: one with the pair (3, 1), one with the pair (3, 5), and one with the pair (2, 4). In all other cases, we both agree on which song is better. For this problem, your goal is to calculate this similarity measure (count of inversions) between me and a number of other people.

## Input
The input starts with a positive integer n, which is between 3 and 25. It represents the number of songs that will be ranked by each person. Then there is one line containing a permutation (or ordering) of the numbers from 1 to n. This represents my preference list. Then we have one positive integer p, which is between 1 and 20, indicating the number of additional people from whom we will get a ranked list. Finally, we have p lines, each of them being a different permutation of the numbers between 1 and n.

You can assume a, b and m are less than 50. No line is longer than 50 characters.

## Output
For each of the p other people, output the number of inversions between his/her preference list and mine (in the second line of input). You should print this number of inversion in the output, one per line, in the same order as the corresponding ranked lists in the input.

Note:
In the example input/output below, the first ranked list being compared to mine corresponds to the example given in the second paragraph above. The last line of input shows you the worst case scenario, where the ranked list is completely reversed, giving the maximum number of inversions.

## Sample Input 1
```
5
3 1 5 2 4
3
1 5 3 4 2
1 4 5 2 3
4 2 5 1 3
```

## Sample Output 1
```
3
6
10
```
