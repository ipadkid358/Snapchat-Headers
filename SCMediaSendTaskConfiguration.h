/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol SCSnapSendPreparer;
@class NSArray, NSNumber, NSDate, SOJUStoryFrame, NSDictionary, NSString, SOJUMultiSnapMetadata;

@interface SCMediaSendTaskConfiguration : NSObject <NSCoding> {

	BOOL _postToMyStory;
	BOOL _isForwarded;
	id<SCSnapSendPreparer> _snapSendPreparer;
	NSArray* _userRecipients;
	NSArray* _invitedUserRecipients;
	NSArray* _officialStories;
	NSArray* _sharedStories;
	NSArray* _businessIds;
	NSArray* _mischiefs;
	NSArray* _mobStories;
	NSNumber* _postToMyStoryPrivacyOverride;
	NSDate* _storyUserPostedTimestamp;
	SOJUStoryFrame* _storyFraming;
	NSDictionary* _messageMetadata;
	NSArray* _blizzardEventsOnSuccess;
	NSString* _additionalText;
	SOJUMultiSnapMetadata* _multiSnapMetadata;

}

@property (nonatomic,readonly) id<SCSnapSendPreparer> snapSendPreparer;                //@synthesize snapSendPreparer=_snapSendPreparer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userRecipients;                          //@synthesize userRecipients=_userRecipients - In the implementation block
@property (nonatomic,copy,readonly) NSArray * invitedUserRecipients;                   //@synthesize invitedUserRecipients=_invitedUserRecipients - In the implementation block
@property (nonatomic,copy,readonly) NSArray * officialStories;                         //@synthesize officialStories=_officialStories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sharedStories;                           //@synthesize sharedStories=_sharedStories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * businessIds;                             //@synthesize businessIds=_businessIds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mischiefs;                               //@synthesize mischiefs=_mischiefs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mobStories;                              //@synthesize mobStories=_mobStories - In the implementation block
@property (nonatomic,readonly) BOOL postToMyStory;                                     //@synthesize postToMyStory=_postToMyStory - In the implementation block
@property (nonatomic,readonly) NSNumber * postToMyStoryPrivacyOverride;                //@synthesize postToMyStoryPrivacyOverride=_postToMyStoryPrivacyOverride - In the implementation block
@property (nonatomic,readonly) NSDate * storyUserPostedTimestamp;                      //@synthesize storyUserPostedTimestamp=_storyUserPostedTimestamp - In the implementation block
@property (nonatomic,readonly) SOJUStoryFrame * storyFraming;                          //@synthesize storyFraming=_storyFraming - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * messageMetadata;                    //@synthesize messageMetadata=_messageMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSArray * blizzardEventsOnSuccess;                 //@synthesize blizzardEventsOnSuccess=_blizzardEventsOnSuccess - In the implementation block
@property (nonatomic,copy,readonly) NSString * additionalText;                         //@synthesize additionalText=_additionalText - In the implementation block
@property (nonatomic,readonly) BOOL isForwarded;                                       //@synthesize isForwarded=_isForwarded - In the implementation block
@property (nonatomic,readonly) SOJUMultiSnapMetadata * multiSnapMetadata;              //@synthesize multiSnapMetadata=_multiSnapMetadata - In the implementation block
-(SOJUMultiSnapMetadata *)multiSnapMetadata;
-(id<SCSnapSendPreparer>)snapSendPreparer;
-(id)initWithUserRecipients:(id)arg1 invitedUserRecipients:(id)arg2 postToMyStory:(BOOL)arg3 myStoryPrivacyOverride:(id)arg4 officialStories:(id)arg5 sharedStories:(id)arg6 businessIds:(id)arg7 mobStories:(id)arg8 mischiefs:(id)arg9 storyUserPostedTimestamp:(id)arg10 storyFraming:(id)arg11 messageMetadata:(id)arg12 blizzardEventsOnSuccess:(id)arg13 additionalText:(id)arg14 multiSnapMetadata:(id)arg15 snapSendPreparer:(id)arg16 isForwarded:(BOOL)arg17 ;
-(NSArray *)mischiefs;
-(NSArray *)userRecipients;
-(NSArray *)invitedUserRecipients;
-(void)updateGroupRecipientsWithGroupIds:(id)arg1 ;
-(void)updateUserRecipientsWithUserIds:(id)arg1 ;
-(void)updateUserInviteRecipientsWithPhoneNumbers:(id)arg1 ;
-(NSDictionary *)messageMetadata;
-(NSArray *)blizzardEventsOnSuccess;
-(void)clearBlizzardEventsOnSuccess;
-(BOOL)postToMyStory;
-(NSArray *)officialStories;
-(NSArray *)mobStories;
-(NSArray *)sharedStories;
-(NSNumber *)postToMyStoryPrivacyOverride;
-(NSDate *)storyUserPostedTimestamp;
-(SOJUStoryFrame *)storyFraming;
-(void)removeStory;
-(NSString *)additionalText;
-(BOOL)isRecipientSingleUser;
-(BOOL)isRecipientSingleGroup;
-(void)removeGroupId:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)businessIds;
-(id)allRecipients;
-(BOOL)isForwarded;
-(void)removeUser:(id)arg1 ;
@end
