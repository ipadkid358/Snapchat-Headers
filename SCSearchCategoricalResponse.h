/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLLocation, NSArray, SCSearchPromptCardModel;

@interface SCSearchCategoricalResponse : NSObject <NSCopying> {

	NSString* _queryText;
	NSString* _responseUUID;
	CLLocation* _queryLocation;
	NSString* _cacheKey;
	NSArray* _dynamicStories;
	SCSearchPromptCardModel* _promptCardModel;

}

@property (nonatomic,copy,readonly) NSString * queryText;                                   //@synthesize queryText=_queryText - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseUUID;                                //@synthesize responseUUID=_responseUUID - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * queryLocation;                             //@synthesize queryLocation=_queryLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheKey;                                    //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dynamicStories;                               //@synthesize dynamicStories=_dynamicStories - In the implementation block
@property (nonatomic,copy,readonly) SCSearchPromptCardModel * promptCardModel;              //@synthesize promptCardModel=_promptCardModel - In the implementation block
-(NSArray *)dynamicStories;
-(CLLocation *)queryLocation;
-(id)initWithQueryText:(id)arg1 responseUUID:(id)arg2 queryLocation:(id)arg3 cacheKey:(id)arg4 dynamicStories:(id)arg5 promptCardModel:(id)arg6 ;
-(NSString *)responseUUID;
-(SCSearchPromptCardModel *)promptCardModel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cacheKey;
-(NSString *)queryText;
@end
