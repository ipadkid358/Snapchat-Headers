/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/ZZArchiveEntryWriter.h>

@class NSMutableData;

@interface ZZNewArchiveEntryWriter : NSObject <ZZArchiveEntryWriter> {

	NSMutableData* _centralFileHeader;
	NSMutableData* _localFileHeader;
	long long _compressionLevel;
	/*^block*/id _dataBlock;
	/*^block*/id _streamBlock;
	/*^block*/id _dataConsumerBlock;

}
-(unsigned)offsetToLocalFileEnd;
-(BOOL)writeLocalFileToChannelOutput:(id)arg1 withInitialSkip:(unsigned)arg2 error:(out id*)arg3 ;
-(BOOL)writeCentralFileHeaderToChannelOutput:(id)arg1 error:(out id*)arg2 ;
-(id)initWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(long long)arg4 dataBlock:(/*^block*/id)arg5 streamBlock:(/*^block*/id)arg6 dataConsumerBlock:(/*^block*/id)arg7 ;
-(ZZCentralFileHeader*)centralFileHeader;
-(ZZLocalFileHeader*)localFileHeader;
@end

