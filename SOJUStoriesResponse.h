/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUStoriesResponse.h>
@class NSArray, NSDictionary, NSNumber, SOJUBroadcastStoriesOrderingOrderingResponse, SOJUServerInfoResponse, SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig, NSString;


@protocol SOJUStoriesResponse <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSArray * myStories; 
@property (nonatomic,copy,readonly) NSArray * myStoriesWithCollabs; 
@property (nonatomic,copy,readonly) NSArray * friendStories; 
@property (nonatomic,copy,readonly) NSArray * myGroupStories; 
@property (nonatomic,copy,readonly) NSArray * myVerifiedStories; 
@property (nonatomic,copy,readonly) NSDictionary * matureContentText; 
@property (nonatomic,copy,readonly) NSNumber * friendStoriesDelta; 
@property (nonatomic,copy,readonly) SOJUBroadcastStoriesOrderingOrderingResponse * orderingResponse; 
@property (nonatomic,copy,readonly) SOJUServerInfoResponse * serverInfo; 
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig * userStoriesPrecacheConfig; 
@property (nonatomic,copy,readonly) NSArray * myMobStories; 
@property (nonatomic,copy,readonly) NSString * syncMetadata; 
@property (nonatomic,copy,readonly) NSNumber * unsignedReceipt; 
@property (nonatomic,copy,readonly) NSString * responseType; 
@property (nonatomic,copy,readonly) NSDictionary * deletedFriendStories; 
@required
-(NSArray *)friendStories;
-(NSString *)syncMetadata;
-(NSArray *)myMobStories;
-(NSArray *)myStories;
-(NSArray *)myStoriesWithCollabs;
-(NSArray *)myGroupStories;
-(NSArray *)myVerifiedStories;
-(NSDictionary *)matureContentText;
-(NSNumber *)friendStoriesDelta;
-(SOJUBroadcastStoriesOrderingOrderingResponse *)orderingResponse;
-(SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig *)userStoriesPrecacheConfig;
-(NSNumber *)unsignedReceipt;
-(NSDictionary *)deletedFriendStories;
-(NSString *)responseType;
-(SOJUServerInfoResponse *)serverInfo;

@end


@class NSArray, NSDictionary, NSNumber, SOJUBroadcastStoriesOrderingOrderingResponse, SOJUServerInfoResponse, SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig, NSString;

@interface SOJUStoriesResponse : NSObject <SOJUStoriesResponse> {

	NSArray* _myStories;
	NSArray* _myStoriesWithCollabs;
	NSArray* _friendStories;
	NSArray* _myGroupStories;
	NSArray* _myVerifiedStories;
	NSDictionary* _matureContentText;
	NSNumber* _friendStoriesDelta;
	SOJUBroadcastStoriesOrderingOrderingResponse* _orderingResponse;
	SOJUServerInfoResponse* _serverInfo;
	SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig* _userStoriesPrecacheConfig;
	NSArray* _myMobStories;
	NSString* _syncMetadata;
	NSNumber* _unsignedReceipt;
	NSString* _responseType;
	NSDictionary* _deletedFriendStories;

}

@property (nonatomic,copy,readonly) NSArray * myStories;                                                                                //@synthesize myStories=_myStories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * myStoriesWithCollabs;                                                                     //@synthesize myStoriesWithCollabs=_myStoriesWithCollabs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friendStories;                                                                            //@synthesize friendStories=_friendStories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * myGroupStories;                                                                           //@synthesize myGroupStories=_myGroupStories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * myVerifiedStories;                                                                        //@synthesize myVerifiedStories=_myVerifiedStories - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * matureContentText;                                                                   //@synthesize matureContentText=_matureContentText - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * friendStoriesDelta;                                                                      //@synthesize friendStoriesDelta=_friendStoriesDelta - In the implementation block
@property (nonatomic,copy,readonly) SOJUBroadcastStoriesOrderingOrderingResponse * orderingResponse;                                    //@synthesize orderingResponse=_orderingResponse - In the implementation block
@property (nonatomic,copy,readonly) SOJUServerInfoResponse * serverInfo;                                                                //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig * userStoriesPrecacheConfig;              //@synthesize userStoriesPrecacheConfig=_userStoriesPrecacheConfig - In the implementation block
@property (nonatomic,copy,readonly) NSArray * myMobStories;                                                                             //@synthesize myMobStories=_myMobStories - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncMetadata;                                                                            //@synthesize syncMetadata=_syncMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * unsignedReceipt;                                                                         //@synthesize unsignedReceipt=_unsignedReceipt - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseType;                                                                            //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * deletedFriendStories;                                                                //@synthesize deletedFriendStories=_deletedFriendStories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(NSArray *)friendStories;
-(NSString *)syncMetadata;
-(NSArray *)myMobStories;
-(BOOL)friendStoriesDeltaValue;
-(BOOL)unsignedReceiptValue;
-(long long)responseTypeEnum;
-(NSArray *)myStories;
-(NSArray *)myStoriesWithCollabs;
-(NSArray *)myGroupStories;
-(NSArray *)myVerifiedStories;
-(NSDictionary *)matureContentText;
-(NSNumber *)friendStoriesDelta;
-(SOJUBroadcastStoriesOrderingOrderingResponse *)orderingResponse;
-(SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig *)userStoriesPrecacheConfig;
-(NSNumber *)unsignedReceipt;
-(NSDictionary *)deletedFriendStories;
-(id)initWithMyStories:(id)arg1 myStoriesWithCollabs:(id)arg2 friendStories:(id)arg3 myGroupStories:(id)arg4 myVerifiedStories:(id)arg5 matureContentText:(id)arg6 friendStoriesDelta:(id)arg7 orderingResponse:(id)arg8 serverInfo:(id)arg9 userStoriesPrecacheConfig:(id)arg10 myMobStories:(id)arg11 syncMetadata:(id)arg12 unsignedReceipt:(id)arg13 responseType:(id)arg14 deletedFriendStories:(id)arg15 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)responseType;
-(SOJUServerInfoResponse *)serverInfo;
-(id)toDictionary;
@end
