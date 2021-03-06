/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUChatFeedResponse.h>
@class SOJUServerInfoResponse, SOJUMessagingGatewayInfo, SOJUUpdatesResponse, SOJUFriendsResponse, SOJUFeedResponseInfo, NSArray, SOJUConversationsResponseInfo;


@protocol SOJUChatFeedResponse <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SOJUServerInfoResponse * serverInfo; 
@property (nonatomic,copy,readonly) SOJUMessagingGatewayInfo * messagingGatewayInfo; 
@property (nonatomic,copy,readonly) SOJUUpdatesResponse * updatesResponse; 
@property (nonatomic,copy,readonly) SOJUFriendsResponse * friendsResponse; 
@property (nonatomic,copy,readonly) SOJUFeedResponseInfo * feedResponseInfo; 
@property (nonatomic,copy,readonly) NSArray * mischiefResponse; 
@property (nonatomic,copy,readonly) NSArray * conversationsResponse; 
@property (nonatomic,copy,readonly) SOJUConversationsResponseInfo * conversationsResponseInfo; 
@required
-(SOJUMessagingGatewayInfo *)messagingGatewayInfo;
-(SOJUUpdatesResponse *)updatesResponse;
-(SOJUFriendsResponse *)friendsResponse;
-(SOJUFeedResponseInfo *)feedResponseInfo;
-(NSArray *)mischiefResponse;
-(NSArray *)conversationsResponse;
-(SOJUConversationsResponseInfo *)conversationsResponseInfo;
-(SOJUServerInfoResponse *)serverInfo;

@end


@class SOJUServerInfoResponse, SOJUMessagingGatewayInfo, SOJUUpdatesResponse, SOJUFriendsResponse, SOJUFeedResponseInfo, NSArray, SOJUConversationsResponseInfo, NSString;

@interface SOJUChatFeedResponse : NSObject <SOJUChatFeedResponse> {

	SOJUServerInfoResponse* _serverInfo;
	SOJUMessagingGatewayInfo* _messagingGatewayInfo;
	SOJUUpdatesResponse* _updatesResponse;
	SOJUFriendsResponse* _friendsResponse;
	SOJUFeedResponseInfo* _feedResponseInfo;
	NSArray* _mischiefResponse;
	NSArray* _conversationsResponse;
	SOJUConversationsResponseInfo* _conversationsResponseInfo;

}

@property (nonatomic,copy,readonly) SOJUServerInfoResponse * serverInfo;                                    //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,copy,readonly) SOJUMessagingGatewayInfo * messagingGatewayInfo;                        //@synthesize messagingGatewayInfo=_messagingGatewayInfo - In the implementation block
@property (nonatomic,copy,readonly) SOJUUpdatesResponse * updatesResponse;                                  //@synthesize updatesResponse=_updatesResponse - In the implementation block
@property (nonatomic,copy,readonly) SOJUFriendsResponse * friendsResponse;                                  //@synthesize friendsResponse=_friendsResponse - In the implementation block
@property (nonatomic,copy,readonly) SOJUFeedResponseInfo * feedResponseInfo;                                //@synthesize feedResponseInfo=_feedResponseInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mischiefResponse;                                             //@synthesize mischiefResponse=_mischiefResponse - In the implementation block
@property (nonatomic,copy,readonly) NSArray * conversationsResponse;                                        //@synthesize conversationsResponse=_conversationsResponse - In the implementation block
@property (nonatomic,copy,readonly) SOJUConversationsResponseInfo * conversationsResponseInfo;              //@synthesize conversationsResponseInfo=_conversationsResponseInfo - In the implementation block
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
-(SOJUMessagingGatewayInfo *)messagingGatewayInfo;
-(SOJUUpdatesResponse *)updatesResponse;
-(SOJUFriendsResponse *)friendsResponse;
-(SOJUFeedResponseInfo *)feedResponseInfo;
-(NSArray *)mischiefResponse;
-(NSArray *)conversationsResponse;
-(SOJUConversationsResponseInfo *)conversationsResponseInfo;
-(id)initWithServerInfo:(id)arg1 messagingGatewayInfo:(id)arg2 updatesResponse:(id)arg3 friendsResponse:(id)arg4 feedResponseInfo:(id)arg5 mischiefResponse:(id)arg6 conversationsResponse:(id)arg7 conversationsResponseInfo:(id)arg8 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SOJUServerInfoResponse *)serverInfo;
-(id)toDictionary;
@end

