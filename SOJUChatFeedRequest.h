/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUChatFeedRequest.h>
@class NSString, NSNumber, SOJUFriendsRequest, NSArray, NSDictionary;


@protocol SOJUChatFeedRequest <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * checksumsDict; 
@property (nonatomic,copy,readonly) NSString * featuresMap; 
@property (nonatomic,copy,readonly) NSNumber * pullToRefresh; 
@property (nonatomic,copy,readonly) SOJUFriendsRequest * friendsRequest; 
@property (nonatomic,copy,readonly) NSArray * groupDeltaRequests; 
@property (nonatomic,copy,readonly) NSNumber * excludeFriends; 
@property (nonatomic,copy,readonly) NSString * messagesTier; 
@property (nonatomic,copy,readonly) NSDictionary * conversationDeltaQueryMap; 
@property (nonatomic,copy,readonly) NSDictionary * conversationSnapDeltaQueryMap; 
@property (nonatomic,copy,readonly) NSString * feedIterToken; 
@property (nonatomic,copy,readonly) NSString * messageIterToken; 
@property (nonatomic,copy,readonly) NSString * groupPaginationType; 
@property (nonatomic,copy,readonly) NSString * fetchReason; 
@required
-(NSString *)checksumsDict;
-(SOJUFriendsRequest *)friendsRequest;
-(NSArray *)groupDeltaRequests;
-(NSNumber *)excludeFriends;
-(NSString *)messagesTier;
-(NSDictionary *)conversationDeltaQueryMap;
-(NSDictionary *)conversationSnapDeltaQueryMap;
-(NSString *)feedIterToken;
-(NSString *)messageIterToken;
-(NSString *)groupPaginationType;
-(NSString *)fetchReason;
-(NSString *)featuresMap;
-(NSNumber *)pullToRefresh;

@end


@class NSString, NSNumber, SOJUFriendsRequest, NSArray, NSDictionary;

@interface SOJUChatFeedRequest : NSObject <SOJUChatFeedRequest> {

	NSString* _checksumsDict;
	NSString* _featuresMap;
	NSNumber* _pullToRefresh;
	SOJUFriendsRequest* _friendsRequest;
	NSArray* _groupDeltaRequests;
	NSNumber* _excludeFriends;
	NSString* _messagesTier;
	NSDictionary* _conversationDeltaQueryMap;
	NSDictionary* _conversationSnapDeltaQueryMap;
	NSString* _feedIterToken;
	NSString* _messageIterToken;
	NSString* _groupPaginationType;
	NSString* _fetchReason;

}

@property (nonatomic,copy,readonly) NSString * checksumsDict;                                  //@synthesize checksumsDict=_checksumsDict - In the implementation block
@property (nonatomic,copy,readonly) NSString * featuresMap;                                    //@synthesize featuresMap=_featuresMap - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * pullToRefresh;                                  //@synthesize pullToRefresh=_pullToRefresh - In the implementation block
@property (nonatomic,copy,readonly) SOJUFriendsRequest * friendsRequest;                       //@synthesize friendsRequest=_friendsRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupDeltaRequests;                              //@synthesize groupDeltaRequests=_groupDeltaRequests - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * excludeFriends;                                 //@synthesize excludeFriends=_excludeFriends - In the implementation block
@property (nonatomic,copy,readonly) NSString * messagesTier;                                   //@synthesize messagesTier=_messagesTier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * conversationDeltaQueryMap;                  //@synthesize conversationDeltaQueryMap=_conversationDeltaQueryMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * conversationSnapDeltaQueryMap;              //@synthesize conversationSnapDeltaQueryMap=_conversationSnapDeltaQueryMap - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedIterToken;                                  //@synthesize feedIterToken=_feedIterToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageIterToken;                               //@synthesize messageIterToken=_messageIterToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupPaginationType;                            //@synthesize groupPaginationType=_groupPaginationType - In the implementation block
@property (nonatomic,copy,readonly) NSString * fetchReason;                                    //@synthesize fetchReason=_fetchReason - In the implementation block
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
-(BOOL)pullToRefreshValue;
-(BOOL)excludeFriendsValue;
-(long long)messagesTierEnum;
-(NSString *)checksumsDict;
-(SOJUFriendsRequest *)friendsRequest;
-(NSArray *)groupDeltaRequests;
-(NSNumber *)excludeFriends;
-(NSString *)messagesTier;
-(NSDictionary *)conversationDeltaQueryMap;
-(NSDictionary *)conversationSnapDeltaQueryMap;
-(long long)groupPaginationTypeEnum;
-(long long)fetchReasonEnum;
-(NSString *)feedIterToken;
-(NSString *)messageIterToken;
-(NSString *)groupPaginationType;
-(NSString *)fetchReason;
-(id)initWithChecksumsDict:(id)arg1 featuresMap:(id)arg2 pullToRefresh:(id)arg3 friendsRequest:(id)arg4 groupDeltaRequests:(id)arg5 excludeFriends:(id)arg6 messagesTier:(id)arg7 conversationDeltaQueryMap:(id)arg8 conversationSnapDeltaQueryMap:(id)arg9 feedIterToken:(id)arg10 messageIterToken:(id)arg11 groupPaginationType:(id)arg12 fetchReason:(id)arg13 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)featuresMap;
-(id)toDictionary;
-(NSNumber *)pullToRefresh;
@end

