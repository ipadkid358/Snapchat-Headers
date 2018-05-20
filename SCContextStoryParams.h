/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCContextContextHint, CLLocation;

@interface SCContextStoryParams : NSObject {

	BOOL _replyEnabled;
	BOOL _isShareable;
	BOOL _hasFilter;
	int _launchSource;
	NSString* _clientId;
	NSString* _storyId;
	NSString* _contentUsername;
	SCContextContextHint* _contextHint;
	NSString* _singleRecipientDisplayName;
	NSString* _groupRecipientConversationId;
	long long _lensId;
	long long _filterId;
	NSString* _encryptedGeoData;
	NSString* _captionText;
	NSString* _venueId;
	NSString* _attachmentUrl;
	CLLocation* _contentLocation;
	long long _viewLocation;
	long long _storyType;
	long long _storyTypeSpecific;

}

@property (nonatomic,readonly) NSString * clientId;                                  //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,readonly) NSString * storyId;                                   //@synthesize storyId=_storyId - In the implementation block
@property (nonatomic,readonly) NSString * contentUsername;                           //@synthesize contentUsername=_contentUsername - In the implementation block
@property (nonatomic,readonly) SCContextContextHint * contextHint;                   //@synthesize contextHint=_contextHint - In the implementation block
@property (nonatomic,readonly) NSString * singleRecipientDisplayName;                //@synthesize singleRecipientDisplayName=_singleRecipientDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * groupRecipientConversationId;              //@synthesize groupRecipientConversationId=_groupRecipientConversationId - In the implementation block
@property (nonatomic,readonly) long long lensId;                                     //@synthesize lensId=_lensId - In the implementation block
@property (nonatomic,readonly) long long filterId;                                   //@synthesize filterId=_filterId - In the implementation block
@property (nonatomic,readonly) NSString * encryptedGeoData;                          //@synthesize encryptedGeoData=_encryptedGeoData - In the implementation block
@property (nonatomic,readonly) NSString * captionText;                               //@synthesize captionText=_captionText - In the implementation block
@property (nonatomic,readonly) NSString * venueId;                                   //@synthesize venueId=_venueId - In the implementation block
@property (nonatomic,readonly) NSString * attachmentUrl;                             //@synthesize attachmentUrl=_attachmentUrl - In the implementation block
@property (nonatomic,readonly) CLLocation * contentLocation;                         //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,readonly) int launchSource;                                     //@synthesize launchSource=_launchSource - In the implementation block
@property (nonatomic,readonly) long long viewLocation;                               //@synthesize viewLocation=_viewLocation - In the implementation block
@property (nonatomic,readonly) BOOL replyEnabled;                                    //@synthesize replyEnabled=_replyEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isShareable;                                     //@synthesize isShareable=_isShareable - In the implementation block
@property (nonatomic,readonly) BOOL hasFilter;                                       //@synthesize hasFilter=_hasFilter - In the implementation block
@property (nonatomic,readonly) long long storyType;                                  //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,readonly) long long storyTypeSpecific;                          //@synthesize storyTypeSpecific=_storyTypeSpecific - In the implementation block
-(long long)lensId;
-(NSString *)storyId;
-(long long)filterId;
-(NSString *)venueId;
-(SCContextContextHint *)contextHint;
-(NSString *)attachmentUrl;
-(NSString *)encryptedGeoData;
-(long long)storyTypeSpecific;
-(BOOL)isShareable;
-(long long)viewLocation;
-(id)initWithStory:(id)arg1 friendStories:(id)arg2 properties:(id)arg3 isStoryShare:(BOOL)arg4 ;
-(BOOL)replyEnabled;
-(NSString *)contentUsername;
-(NSString *)singleRecipientDisplayName;
-(NSString *)groupRecipientConversationId;
-(id)_contentUsernameForStory:(id)arg1 ;
-(int)_launchSourceForStory:(id)arg1 isStoryShare:(BOOL)arg2 ;
-(id)_groupConversationIdForStory:(id)arg1 ;
-(BOOL)hasFilter;
-(CLLocation *)contentLocation;
-(NSString *)clientId;
-(int)launchSource;
-(NSString *)captionText;
-(long long)storyType;
@end
