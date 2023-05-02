"""
Provided for you is the encryption alphabet 
used to encrypt the provided files.
This inclues: a-z, A-Z, 0-9, punctuation like .(); 
(not the same as in a1-a3), space and newline
"""
from cipher import FileDecoder
import string
import re
import os.path
import datetime

alphabet = string.ascii_lowercase + string.ascii_uppercase\
    + string.digits + string.punctuation + " \n"

class DecryptException(Exception):
    pass 

def check_password(key):
    while(True):
        
        if(key=="q"):
            quit()
        check=re.match(r'^(?=.*[A-Z])(?=.*[0-9])(?=.*[\!\@\#\$\&\*\-\_\.])[a-zA-Z0-9\!\@\#\$\&\*\-\_\.]{6,8}$',key)
        if(check==None):
            key=input("Invalid password. Try again.(\"q\"to quit otherwise)")    
        else:
            break
    return key
def main():
    #program flow
    #1
    filename=input("Enter a filename ")

    #2
    while(True):
        
        filename="../cases/ferry1.out"
        if(filename=="q"):
            quit()
        if(filename=="" or not os.path.exists(filename)):
            filename=input("Invalid filename. Try again.(\"q\"to quit otherwise) ")    
        else:
            break

    #3
    

    #4
    

    #5
    #check if the provided password decrypts the provided file correctly
    df = []
#df=decrypted file
    while(True):
        key=input("Enter the password ")
        key=check_password(key)
        validity=True
        file_decoder = FileDecoder(key,filename,alphabet)
        for row in file_decoder:
            print(row)
            df.append(row)
        try:
            if validity!=False:
                raise DecryptException(key)
        except DecryptException as e:
            print("Error")        
        else:        
            break           
#    li=file_decoder.store_lists(file_decoder.filename)
#    li=file_decoder.decrypt(key,li,alphabet)
    #6
    #Iterate through the decrypted rows

    #7
    #Calculate the average monthly delay between
    #  scheduled time and when the ferry
    #  actually leaves the port:
#    result=[]

    
    Months={"Jan":0,"Feb":0,"Mar":0,"Apr":0,"May":0,"Jun":0,"Jul":0,"Aug":0,"Sep":0,"Oct":0,"Nov":0,"Dec":0}   
    count=[0,0,0,0,0,0,0,0,0,0,0,0]
    
    for elem in df:
        if elem[12].isdigit() and elem[7].isdigit():
            
            if elem[4]=='01':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Jan"]+=diff[0]+diff[1]/60
                count[0]+=1   
            if elem[4]=='02':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Feb"]+=diff[0]+diff[1]/60
                count[1]+=1
            if elem[4]=='03':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Mar"]+=diff[0]+diff[1]/60
                count[2]+=1   
            if elem[4]=='04':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Apr"]+=diff[0]+diff[1]/60
                count[3]+=1   
            if elem[4]=='05':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["May"]+=diff[0]+diff[1]/60
                count[4]+=1   
            if elem[4]=='06':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Jun"]+=diff[0]+diff[1]/60
                count[5]+=1   
            if elem[4]=='07':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Jul"]+=diff[0]+diff[1]/60
                count[6]+=1   
            if elem[4]=='08':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Aug"]+=diff[0]+diff[1]/60
                count[7]+=1   
            if elem[4]=='09':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Sep"]+=diff[0]+diff[1]/60
                count[8]+=1   
            if elem[4]=='10':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Oct"]+=diff[0]+diff[1]/60
                count[9]+=1   
            if elem[4]=='11':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Nov"]+=diff[0]+diff[1]/60
                count[10]+=1   
            if elem[4]=='12':
                elapsedTime=datetime.datetime(int(elem[8]),int(elem[9]),int(elem[10]),int(elem[11]),int(elem[12]))-datetime.datetime(int(elem[3]),int(elem[4]),int(elem[5]),int(elem[6]),int(elem[7]))
                diff=divmod(elapsedTime.total_seconds(),60)
                Months["Dec"]+=diff[0]+diff[1]/60
                count[11]+=1   
                    
            
        
        
    
    
    print("RESULTS\nFileDecoder: FileDecoder(key='{0}', file='{1}')\nEntries: {2}".format(key,filename,len(df)))

    if count[0] > 0:
            print("Average delay for Jan:",round(Months["Jan"]/count[1],2))
    if count[1] > 0:
            print("Average delay for Feb:",round(Months["Feb"]/count[1],2))
    if count[2] > 0:
            print("Average delay for Mar:",round(Months["Mar"]/count[1],2))
    if count[3] > 0:
            print("Average delay for Apr:",round(Months["Apr"]/count[1],2))
    if count[4] > 0:
            print("Average delay for May:",round(Months["May"]/count[1],2))
    if count[5] > 0:
            print("Average delay for Jun:",round(Months["Jun"]/count[1],2))
    if count[6] > 0:
            print("Average delay for Jul:",round(Months["Jul"]/count[1],2))
    if count[7] > 0:
            print("Average delay for Aug:",round(Months["Aug"]/count[1],2))
    if count[8] > 0:
            print("Average delay for Sep:",round(Months["Sep"]/count[1],2))
    if count[9] > 0:
            print("Average delay for Oct:",round(Months["Oct"]/count[1],2))
    if count[10] > 0:
            print("Average delay for Nov:",round(Months["Nov"]/count[1],2))
    if count[11] > 0:
            print("Average delay for Dec:",round(Months["Dec"]/count[1],2))
    
    
    
    print("END")


if __name__ == "__main__":
    main()
