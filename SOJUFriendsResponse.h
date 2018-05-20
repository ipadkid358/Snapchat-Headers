/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUFriendsResponse.h>
@class NSArray, NSString, NSDictionary;


@protocol SOJUFriendsResponse <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSArray * friends; 
@property (nonatomic,copy,readonly) NSString * friendsSyncToken; 
@property (nonatomic,copy,readonly) NSString * friendsSyncType; 
@property (nonatomic,copy,readonly) NSArray * addedFriends; 
@property (nonatomic,copy,readonly) NSArray * bests; 
@property (nonatomic,copy,readonly) NSDictionary * extraFriendmojiMutableDict; 
@property (nonatomic,copy,readonly) NSDictionary * extraFriendmojiReadOnlyDict; 
@required
-(NSString *)friendsSyncToken;
-(NSString *)friendsSyncType;
-(NSArray *)addedFriends;
-(NSArray *)bests;
-(NSDictionary *)extraFriendmojiMutableDict;
-(NSDictionary *)extraFriendmojiReadOnlyDict;
-(NSArray *)friends;

@end


@class NSArray, NSString, NSDictionary;

@interface SOJUFriendsResponse : NSObject <SOJUFriendsResponse> {

	NSArray* _friends;
	NSString* _friendsSyncToken;
	NSString* _friendsSyncType;
	NSArray* _addedFriends;
	NSArray* _bests;
	NSDictionary* _extraFriendmojiMutableDict;
	NSDictionary* _extraFriendmojiReadOnlyDict;

}

@property (nonatomic,copy,readonly) NSArray * friends;                                       //@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendsSyncToken;                             //@synthesize friendsSyncToken=_friendsSyncToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendsSyncType;                              //@synthesize friendsSyncType=_friendsSyncType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * addedFriends;                                  //@synthesize addedFriends=_addedFriends - In the implementation block
@property (nonatomic,copy,readonly) NSArray * bests;                                         //@synthesize bests=_bests - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraFriendmojiMutableDict;               //@synthesize extraFriendmojiMutableDict=_extraFriendmojiMutableDict - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraFriendmojiReadOnlyDict;              //@synthesize extraFriendmojiReadOnlyDict=_extraFriendmojiReadOnlyDict - In the implementation block
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
-(NSString *)friendsSyncToken;
-(long long)friendsSyncTypeEnum;
-(NSString *)friendsSyncType;
-(NSArray *)addedFriends;
-(NSArray *)bests;
-(NSDictionary *)extraFriendmojiMutableDict;
-(NSDictionary *)extraFriendmojiReadOnlyDict;
-(id)initWithFriends:(id)arg1 friendsSyncToken:(id)arg2 friendsSyncType:(id)arg3 addedFriends:(id)arg4 bests:(id)arg5 extraFriendmojiMutableDict:(id)arg6 extraFriendmojiReadOnlyDict:(id)arg7 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSArray *)friends;
@end

