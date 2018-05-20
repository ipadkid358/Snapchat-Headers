/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/BCOV_RACSequence.h>

@class NSString;

@interface BCOV_RACStringSequence : BCOV_RACSequence {

	NSString* _string;
	unsigned long long _offset;

}

@property (nonatomic,copy,readonly) NSString * string;                 //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
+(id)sequenceWithString:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)description;
-(id)array;
-(NSString *)string;
-(unsigned long long)offset;
-(id)head;
-(id)tail;
@end

