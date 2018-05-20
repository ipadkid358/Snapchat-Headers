/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSSet, NSArray;

@interface SCSendToSelectionResult : NSObject <NSCopying> {

	BOOL _myStorySelected;
	NSNumber* _myStoryPrivacyOverride;
	NSSet* _sharedStoriesSelected;
	NSArray* _officialStoriesSelected;
	NSArray* _customStoriesSelected;
	NSArray* _chatStoriesSelected;
	NSArray* _friendRecipientsSelected;
	NSArray* _groupRecipientsSelected;
	NSArray* _suggestFriendsSelected;
	NSArray* _contactSnapchattersSelected;
	NSArray* _contactNonSnapchattersSelected;
	NSArray* _searchedUsersSelected;
	NSArray* _businessProfilesSelected;

}

@property (nonatomic,readonly) BOOL myStorySelected;                                       //@synthesize myStorySelected=_myStorySelected - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * myStoryPrivacyOverride;                     //@synthesize myStoryPrivacyOverride=_myStoryPrivacyOverride - In the implementation block
@property (nonatomic,copy,readonly) NSSet * sharedStoriesSelected;                         //@synthesize sharedStoriesSelected=_sharedStoriesSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * officialStoriesSelected;                     //@synthesize officialStoriesSelected=_officialStoriesSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customStoriesSelected;                       //@synthesize customStoriesSelected=_customStoriesSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * chatStoriesSelected;                         //@synthesize chatStoriesSelected=_chatStoriesSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friendRecipientsSelected;                    //@synthesize friendRecipientsSelected=_friendRecipientsSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupRecipientsSelected;                     //@synthesize groupRecipientsSelected=_groupRecipientsSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestFriendsSelected;                      //@synthesize suggestFriendsSelected=_suggestFriendsSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactSnapchattersSelected;                 //@synthesize contactSnapchattersSelected=_contactSnapchattersSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactNonSnapchattersSelected;              //@synthesize contactNonSnapchattersSelected=_contactNonSnapchattersSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchedUsersSelected;                       //@synthesize searchedUsersSelected=_searchedUsersSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * businessProfilesSelected;                    //@synthesize businessProfilesSelected=_businessProfilesSelected - In the implementation block
-(BOOL)myStorySelected;
-(NSNumber *)myStoryPrivacyOverride;
-(NSSet *)sharedStoriesSelected;
-(NSArray *)officialStoriesSelected;
-(NSArray *)customStoriesSelected;
-(NSArray *)chatStoriesSelected;
-(NSArray *)friendRecipientsSelected;
-(NSArray *)groupRecipientsSelected;
-(NSArray *)suggestFriendsSelected;
-(NSArray *)contactSnapchattersSelected;
-(NSArray *)contactNonSnapchattersSelected;
-(NSArray *)searchedUsersSelected;
-(NSArray *)businessProfilesSelected;
-(id)initWithMyStorySelected:(BOOL)arg1 myStoryPrivacyOverride:(id)arg2 sharedStoriesSelected:(id)arg3 officialStoriesSelected:(id)arg4 customStoriesSelected:(id)arg5 chatStoriesSelected:(id)arg6 friendRecipientsSelected:(id)arg7 groupRecipientsSelected:(id)arg8 suggestFriendsSelected:(id)arg9 contactSnapchattersSelected:(id)arg10 contactNonSnapchattersSelected:(id)arg11 searchedUsersSelected:(id)arg12 businessProfilesSelected:(id)arg13 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
