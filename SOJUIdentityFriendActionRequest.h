/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUIdentityFriendActionRequest.h>
@class NSString, NSArray, NSNumber, NSDictionary;


@protocol SOJUIdentityFriendActionRequest <NSObject,NSCoding,NSCopying,SOJUAuthPayload>
@property (nonatomic,copy,readonly) NSString * timestamp; 
@property (nonatomic,copy,readonly) NSString * reqToken; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * action; 
@property (nonatomic,copy,readonly) NSString * friend; 
@property (nonatomic,copy,readonly) NSArray * friends; 
@property (nonatomic,copy,readonly) NSString * friendId; 
@property (nonatomic,copy,readonly) NSString * addedBy; 
@property (nonatomic,copy,readonly) NSString * identityProfilePage; 
@property (nonatomic,copy,readonly) NSNumber * identityCellIndex; 
@property (nonatomic,copy,readonly) NSString * display; 
@property (nonatomic,copy,readonly) NSNumber * blockReasonId; 
@property (nonatomic,copy,readonly) NSString * suggestionToken; 
@property (nonatomic,copy,readonly) NSString * groupStoryId; 
@property (nonatomic,copy,readonly) NSDictionary * suggestionTokenMap; 
@property (nonatomic,copy,readonly) NSString * storySection; 
@property (nonatomic,copy,readonly) NSNumber * isOfficial; 
@property (nonatomic,copy,readonly) NSString * deletedBy; 
@required
-(NSString *)reqToken;
-(NSString *)addedBy;
-(NSString *)identityProfilePage;
-(NSNumber *)blockReasonId;
-(NSString *)groupStoryId;
-(NSDictionary *)suggestionTokenMap;
-(NSString *)storySection;
-(NSNumber *)isOfficial;
-(NSString *)deletedBy;
-(NSString *)friendId;
-(NSNumber *)identityCellIndex;
-(NSString *)timestamp;
-(NSString *)display;
-(NSString *)action;
-(NSString *)friend;
-(NSString *)username;
-(NSArray *)friends;
-(NSString *)suggestionToken;

@end


@class NSString, NSArray, NSNumber, NSDictionary;

@interface SOJUIdentityFriendActionRequest : NSObject <SOJUIdentityFriendActionRequest> {

	NSString* _timestamp;
	NSString* _reqToken;
	NSString* _username;
	NSString* _action;
	NSString* _friend;
	NSArray* _friends;
	NSString* _friendId;
	NSString* _addedBy;
	NSString* _identityProfilePage;
	NSNumber* _identityCellIndex;
	NSString* _display;
	NSNumber* _blockReasonId;
	NSString* _suggestionToken;
	NSString* _groupStoryId;
	NSDictionary* _suggestionTokenMap;
	NSString* _storySection;
	NSNumber* _isOfficial;
	NSString* _deletedBy;

}

@property (nonatomic,copy,readonly) NSString * timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * reqToken;                            //@synthesize reqToken=_reqToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                            //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * friend;                              //@synthesize friend=_friend - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friends;                              //@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendId;                            //@synthesize friendId=_friendId - In the implementation block
@property (nonatomic,copy,readonly) NSString * addedBy;                             //@synthesize addedBy=_addedBy - In the implementation block
@property (nonatomic,copy,readonly) NSString * identityProfilePage;                 //@synthesize identityProfilePage=_identityProfilePage - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * identityCellIndex;                   //@synthesize identityCellIndex=_identityCellIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * display;                             //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * blockReasonId;                       //@synthesize blockReasonId=_blockReasonId - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionToken;                     //@synthesize suggestionToken=_suggestionToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupStoryId;                        //@synthesize groupStoryId=_groupStoryId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * suggestionTokenMap;              //@synthesize suggestionTokenMap=_suggestionTokenMap - In the implementation block
@property (nonatomic,copy,readonly) NSString * storySection;                        //@synthesize storySection=_storySection - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isOfficial;                          //@synthesize isOfficial=_isOfficial - In the implementation block
@property (nonatomic,copy,readonly) NSString * deletedBy;                           //@synthesize deletedBy=_deletedBy - In the implementation block
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
-(NSString *)reqToken;
-(long long)addedByEnum;
-(int)identityCellIndexValue;
-(int)blockReasonIdValue;
-(BOOL)isOfficialValue;
-(long long)deletedByEnum;
-(NSString *)addedBy;
-(NSString *)identityProfilePage;
-(NSNumber *)blockReasonId;
-(NSString *)groupStoryId;
-(NSDictionary *)suggestionTokenMap;
-(NSString *)storySection;
-(NSNumber *)isOfficial;
-(NSString *)deletedBy;
-(id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 action:(id)arg4 friend:(id)arg5 friends:(id)arg6 friendId:(id)arg7 addedBy:(id)arg8 identityProfilePage:(id)arg9 identityCellIndex:(id)arg10 display:(id)arg11 blockReasonId:(id)arg12 suggestionToken:(id)arg13 groupStoryId:(id)arg14 suggestionTokenMap:(id)arg15 storySection:(id)arg16 isOfficial:(id)arg17 deletedBy:(id)arg18 ;
-(NSString *)friendId;
-(NSNumber *)identityCellIndex;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)timestamp;
-(NSString *)display;
-(NSString *)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)friend;
-(id)toDictionary;
-(NSString *)username;
-(NSArray *)friends;
-(NSString *)suggestionToken;
@end

