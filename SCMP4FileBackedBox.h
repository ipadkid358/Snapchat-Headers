/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMP4Box.h>

@class NSFileHandle;

@interface SCMP4FileBackedBox : SCMP4Box {

	NSFileHandle* _fileHandle;
	unsigned long long _offset;
	unsigned long long _size;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long size;                //@synthesize size=_size - In the implementation block
+(id)mp4BoxFromFileHandle:(id)arg1 type:(id)arg2 offset:(unsigned long long)arg3 size:(unsigned long long)arg4 ;
-(id)initWithFileHandle:(id)arg1 type:(id)arg2 offset:(unsigned long long)arg3 size:(unsigned long long)arg4 ;
-(id)init;
-(unsigned long long)size;
-(id)data;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void)writeToFile:(id)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end
