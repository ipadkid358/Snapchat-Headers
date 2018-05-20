/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class SCR2AstRequest, NSDictionary, NSDate;

@interface SCCheetahFeedAstCachedObject : NSObject <NSCopying, NSCoding> {

	SCR2AstRequest* _request;
	NSDictionary* _asts;
	NSDate* _timestamp;

}

@property (nonatomic,copy,readonly) SCR2AstRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * asts;                   //@synthesize asts=_asts - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithRequest:(id)arg1 asts:(id)arg2 timestamp:(id)arg3 ;
-(NSDictionary *)asts;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)timestamp;
-(SCR2AstRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

