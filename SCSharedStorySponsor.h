/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGeofencedObject.h>
#import <Snapchat/SCSendConfirmationViewNamedRecipient.h>

@class NSString, NSDictionary, NSArray;

@interface SCSharedStorySponsor : SCGeofencedObject <SCSendConfirmationViewNamedRecipient> {

	BOOL _localStory;
	BOOL _whitelisted;
	BOOL _isLagunaOnlyStory;
	NSString* _friendName;
	NSString* _myStoriesDisplayName;
	NSString* _sendScreenDisplayName;
	NSString* _storyGroupId;
	double _timeLeft;
	NSString* _username;
	NSString* _venue;
	NSDictionary* _substoryLocationIds;
	NSArray* _substoryDisplayNames;

}

@property (nonatomic,copy) NSString * friendName;                           //@synthesize friendName=_friendName - In the implementation block
@property (nonatomic,copy) NSString * myStoriesDisplayName;                 //@synthesize myStoriesDisplayName=_myStoriesDisplayName - In the implementation block
@property (nonatomic,copy) NSString * sendScreenDisplayName;                //@synthesize sendScreenDisplayName=_sendScreenDisplayName - In the implementation block
@property (nonatomic,copy) NSString * storyGroupId;                         //@synthesize storyGroupId=_storyGroupId - In the implementation block
@property (assign,nonatomic) double timeLeft;                               //@synthesize timeLeft=_timeLeft - In the implementation block
@property (nonatomic,copy) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * venue;                                //@synthesize venue=_venue - In the implementation block
@property (assign,nonatomic) BOOL localStory;                               //@synthesize localStory=_localStory - In the implementation block
@property (assign,nonatomic) BOOL whitelisted;                              //@synthesize whitelisted=_whitelisted - In the implementation block
@property (assign,nonatomic) BOOL isLagunaOnlyStory;                        //@synthesize isLagunaOnlyStory=_isLagunaOnlyStory - In the implementation block
@property (nonatomic,copy) NSDictionary * substoryLocationIds;              //@synthesize substoryLocationIds=_substoryLocationIds - In the implementation block
@property (nonatomic,copy) NSArray * substoryDisplayNames;                  //@synthesize substoryDisplayNames=_substoryDisplayNames - In the implementation block
-(BOOL)localStory;
-(void)setLocalStory:(BOOL)arg1 ;
-(void)setVenue:(NSString *)arg1 ;
-(NSString *)myStoriesDisplayName;
-(NSString *)friendName;
-(double)timeLeft;
-(NSArray *)substoryDisplayNames;
-(NSDictionary *)substoryLocationIds;
-(id)initWithSoju:(id)arg1 ;
-(id)sendConfirmationDisplayName;
-(NSString *)storyGroupId;
-(NSString *)sendScreenDisplayName;
-(BOOL)isLagunaOnlyStory;
-(BOOL)whitelisted;
-(void)setFriendName:(NSString *)arg1 ;
-(void)setSendScreenDisplayName:(NSString *)arg1 ;
-(void)setMyStoriesDisplayName:(NSString *)arg1 ;
-(void)setStoryGroupId:(NSString *)arg1 ;
-(void)setTimeLeft:(double)arg1 ;
-(void)setWhitelisted:(BOOL)arg1 ;
-(void)setIsLagunaOnlyStory:(BOOL)arg1 ;
-(void)setSubstoryLocationIds:(NSDictionary *)arg1 ;
-(void)setSubstoryDisplayNames:(NSArray *)arg1 ;
-(id)substoriesDisplayText;
-(void)updateSendScreenDisplayName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)venue;
@end

