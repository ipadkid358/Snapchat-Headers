/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCDocObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCFriendsFeedItemInfo : SCDocObject <NSCopying> {

	BOOL _deleted;
	NSString* _feedId;
	long long _type;

}

@property (nonatomic,copy,readonly) NSString * feedId;              //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL deleted;                        //@synthesize deleted=_deleted - In the implementation block
+(id)immutableObjectParse:(const void*)arg1 ;
+(SCDocObjectClassFunctionPointer*)objectClassFunctionPointer;
+(const char*)table;
-(id)initWithFeedId:(id)arg1 type:(long long)arg2 deleted:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)deleted;
-(NSString *)feedId;
@end

