
"""
in this file, you need to add your FileDecoder class
See a4 PDF for details

WE WILL EVALUATE YOUR CLASS INDIVIDUAL, SO MAKE SURE YOU READ
THE SPECIFICATIONS CAREFULLY.
"""

import sys
import os.path

alpha_len=96
    
class FileDecoder(object):
    li=""
    li2=[]
    def __init__(self,key,filename,alphabet):
        self.key=key
        self.filename=filename
        self.alphabet=alphabet
        self.read_file(filename)
        self.store_file(key,self.li,alphabet)

    def read_file(self,filename):
        with open(filename) as file:
                self.li=file.read()
    def store_file(self,key,li,alphabet):
        new_li=""
        i=0
        self.li2=[]
        for row in li:
            for c in row:
                decoded_c=alphabet[alphabet.index(c)%len(alphabet)-alphabet.index(key[i])] 
                new_li+=decoded_c
                i=(i+1)%len(key)
        self.li2.extend(new_li.split("\n"))
        j=0
        for elem in self.li2:
            self.li2[j]=self.li2[j].split(",")
            j+=1
        self.li2=self.li2[:-1]
    def __iter__(self):
        for i in self.li2:
                yield i
    def check_file(self):
        pass
    def print(self):
        pass

    def calc_delay(self):
        pass
    def __str__(self):
        pass
