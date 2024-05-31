class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dct=defaultdict(list)
        for i in strs:
            tmp=sorted(i)
            dct["".join(tmp)].append(i)
        return list(dct.values())
