/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/ZZChannelOutput.h>

@interface ZZFileChannelOutput : NSObject <ZZChannelOutput> {

	int _fileDescriptor;
	unsigned _offset;

}

@property (assign,nonatomic) unsigned offset;              //@synthesize offset=_offset - In the implementation block
-(BOOL)seekToOffset:(unsigned)arg1 error:(out id*)arg2 ;
-(BOOL)truncateAtOffset:(unsigned)arg1 error:(out id*)arg2 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(void)close;
-(BOOL)writeData:(id)arg1 error:(out id*)arg2 ;
-(id)initWithFileDescriptor:(int)arg1 ;
@end
