/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSCopying;
@class NSString, CLLocation, NSObject;

@interface SCSearchQuery : NSObject <NSCopying, NSCoding> {

	NSString* _querySource;
	NSString* _queryText;
	NSString* _queryUUID;
	CLLocation* _queryLocation;
	NSObject*<NSCopying> _queryParameters;

}

@property (nonatomic,copy,readonly) NSString * querySource;                            //@synthesize querySource=_querySource - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryText;                              //@synthesize queryText=_queryText - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryUUID;                              //@synthesize queryUUID=_queryUUID - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * queryLocation;                        //@synthesize queryLocation=_queryLocation - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
-(id)initWithQuerySource:(id)arg1 queryText:(id)arg2 queryUUID:(id)arg3 queryLocation:(id)arg4 queryParameters:(id)arg5 ;
-(NSString *)querySource;
-(CLLocation *)queryLocation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<NSCopying>)queryParameters;
-(NSString *)queryText;
-(NSString *)queryUUID;
@end
