/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJULocDataResponse.h>
@class SOJUServerInfoResponse, SOJULocationResponse, NSArray, NSNumber, SOJUSkipUseCases;


@protocol SOJULocDataResponse <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SOJUServerInfoResponse * serverInfo; 
@property (nonatomic,copy,readonly) SOJULocationResponse * location; 
@property (nonatomic,copy,readonly) NSArray * createdFriend; 
@property (nonatomic,copy,readonly) NSArray * createdFriendStories; 
@property (nonatomic,copy,readonly) NSNumber * hasNewStories; 
@property (nonatomic,copy,readonly) SOJUSkipUseCases * skipUseCases; 
@required
-(NSArray *)createdFriend;
-(NSArray *)createdFriendStories;
-(NSNumber *)hasNewStories;
-(SOJUSkipUseCases *)skipUseCases;
-(SOJULocationResponse *)location;
-(SOJUServerInfoResponse *)serverInfo;

@end


@class SOJUServerInfoResponse, SOJULocationResponse, NSArray, NSNumber, SOJUSkipUseCases, NSString;

@interface SOJULocDataResponse : NSObject <SOJULocDataResponse> {

	SOJUServerInfoResponse* _serverInfo;
	SOJULocationResponse* _location;
	NSArray* _createdFriend;
	NSArray* _createdFriendStories;
	NSNumber* _hasNewStories;
	SOJUSkipUseCases* _skipUseCases;

}

@property (nonatomic,copy,readonly) SOJUServerInfoResponse * serverInfo;              //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,copy,readonly) SOJULocationResponse * location;                  //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSArray * createdFriend;                          //@synthesize createdFriend=_createdFriend - In the implementation block
@property (nonatomic,copy,readonly) NSArray * createdFriendStories;                   //@synthesize createdFriendStories=_createdFriendStories - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hasNewStories;                         //@synthesize hasNewStories=_hasNewStories - In the implementation block
@property (nonatomic,copy,readonly) SOJUSkipUseCases * skipUseCases;                  //@synthesize skipUseCases=_skipUseCases - In the implementation block
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
-(BOOL)hasNewStoriesValue;
-(NSArray *)createdFriend;
-(NSArray *)createdFriendStories;
-(NSNumber *)hasNewStories;
-(SOJUSkipUseCases *)skipUseCases;
-(id)initWithServerInfo:(id)arg1 location:(id)arg2 createdFriend:(id)arg3 createdFriendStories:(id)arg4 hasNewStories:(id)arg5 skipUseCases:(id)arg6 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SOJULocationResponse *)location;
-(SOJUServerInfoResponse *)serverInfo;
-(id)toDictionary;
@end

