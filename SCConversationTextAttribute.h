/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCConversationTextAttributeContent;

@interface SCConversationTextAttribute : NSObject <NSCopying> {

	long long _start;
	long long _end;
	SCConversationTextAttributeContent* _attribute;

}

@property (nonatomic,readonly) long long start;                                                  //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) long long end;                                                    //@synthesize end=_end - In the implementation block
@property (nonatomic,copy,readonly) SCConversationTextAttributeContent * attribute;              //@synthesize attribute=_attribute - In the implementation block
-(id)initWithStart:(long long)arg1 end:(long long)arg2 attribute:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)start;
-(long long)end;
-(SCConversationTextAttributeContent *)attribute;
@end

