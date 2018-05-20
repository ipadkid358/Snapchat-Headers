/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMyContributionStories.h>

@class NSString;

@interface SCMyVerifiedStories : SCMyContributionStories {

	NSString* _verifiedUsername;
	NSString* _userId;

}

@property (nonatomic,retain) NSString * verifiedUsername;              //@synthesize verifiedUsername=_verifiedUsername - In the implementation block
@property (nonatomic,retain) NSString * userId;                        //@synthesize userId=_userId - In the implementation block
+(id)uniqueStoriesIdForUsername:(id)arg1 ;
+(id)myVerifiedStoriesFromSoju:(id)arg1 ;
-(id)thumbnailId;
-(id)initWithUsername:(id)arg1 ;
-(BOOL)containsStory:(id)arg1 ;
-(id)storyForClientId:(id)arg1 ;
-(id)uniqueStoriesId;
-(id)storySpecificTypeString;
-(id)findDuplicatedStoriesWithClientId:(id)arg1 ;
-(void)updateWithMyContributionStories:(id)arg1 ;
-(id)mergeStories:(id)arg1 andStories:(id)arg2 ;
-(void)setVerifiedUsername:(NSString *)arg1 ;
-(NSString *)verifiedUsername;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)displayName;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(id)username;
@end

