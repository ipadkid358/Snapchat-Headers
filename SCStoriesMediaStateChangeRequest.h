/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCStoriesMediaStateChangeRequest : NSObject <NSCopying> {

	NSString* _mediaId;
	long long _state;
	long long _cause;

}

@property (nonatomic,copy,readonly) NSString * mediaId;              //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,readonly) long long state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long cause;                      //@synthesize cause=_cause - In the implementation block
-(id)initWithMediaId:(id)arg1 state:(long long)arg2 cause:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)cause;
-(NSString *)mediaId;
@end

