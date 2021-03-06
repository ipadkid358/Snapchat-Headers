/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/ZZArchiveEntry.h>

@class NSString, NSDate, NSData;

@interface ZZNewArchiveEntry : ZZArchiveEntry {

	NSString* _fileName;
	unsigned short _fileMode;
	NSDate* _lastModified;
	long long _compressionLevel;
	/*^block*/id _dataBlock;
	/*^block*/id _streamBlock;
	/*^block*/id _dataConsumerBlock;

}

@property (nonatomic,readonly) BOOL compressed; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) unsigned short fileMode; 
@property (nonatomic,readonly) NSData * rawFileName; 
@property (nonatomic,readonly) unsigned long long encoding; 
-(id)newWriterCanSkipLocalFile:(BOOL)arg1 ;
-(id)initWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(long long)arg4 dataBlock:(/*^block*/id)arg5 streamBlock:(/*^block*/id)arg6 dataConsumerBlock:(/*^block*/id)arg7 ;
-(id)fileNameWithEncoding:(unsigned long long)arg1 ;
-(unsigned short)fileMode;
-(NSData *)rawFileName;
-(BOOL)compressed;
-(unsigned long long)encoding;
-(NSDate *)lastModified;
@end

