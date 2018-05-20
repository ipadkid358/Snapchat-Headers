/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSInputStream;

@interface ZZStandardDecryptInputStream : NSInputStream {

	NSInputStream* _upstream;
	ZZStandardCryptoEngine _crypto;

}
-(id)initWithStream:(id)arg1 password:(id)arg2 header:(char*)arg3 check:(unsigned short)arg4 version:(unsigned char)arg5 error:(out id*)arg6 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)close;
-(void)open;
-(unsigned long long)streamStatus;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
@end

