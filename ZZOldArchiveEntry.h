/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/ZZArchiveEntry.h>

@class NSDate, NSData;

@interface ZZOldArchiveEntry : ZZArchiveEntry {

	ZZCentralFileHeader* _centralFileHeader;
	ZZLocalFileHeader* _localFileHeader;
	long long _encryptionMode;

}

@property (nonatomic,readonly) BOOL compressed; 
@property (nonatomic,readonly) BOOL encrypted; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) unsigned long long crc32; 
@property (nonatomic,readonly) unsigned long long compressedSize; 
@property (nonatomic,readonly) unsigned long long uncompressedSize; 
@property (nonatomic,readonly) unsigned short fileMode; 
@property (nonatomic,readonly) NSData * rawFileName; 
@property (nonatomic,readonly) unsigned long long encoding; 
-(id)initWithCentralFileHeader:(ZZCentralFileHeader*)arg1 localFileHeader:(ZZLocalFileHeader*)arg2 ;
-(id)newWriterCanSkipLocalFile:(BOOL)arg1 ;
-(id)fileNameWithEncoding:(unsigned long long)arg1 ;
-(id)newStreamWithPassword:(id)arg1 error:(out id*)arg2 ;
-(id)newDataWithPassword:(id)arg1 error:(out id*)arg2 ;
-(CGDataProviderRef)newDataProviderWithPassword:(id)arg1 error:(out id*)arg2 ;
-(unsigned short)fileMode;
-(NSData *)rawFileName;
-(BOOL)checkEncryptionAndCompression:(out id*)arg1 ;
-(id)streamForData:(id)arg1 withPassword:(id)arg2 error:(out id*)arg3 ;
-(unsigned long long)uncompressedSize;
-(unsigned short)compressionMethod;
-(BOOL)compressed;
-(id)fileData;
-(unsigned long long)compressedSize;
-(BOOL)check:(out id*)arg1 ;
-(BOOL)encrypted;
-(unsigned long long)crc32;
-(unsigned long long)encoding;
-(NSDate *)lastModified;
@end

