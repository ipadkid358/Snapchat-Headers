/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCContributionStoryPublisherBuilder : NSObject {

	NSString* _displayName;
	NSString* _subtext;
	NSString* _profileDescription;
	NSString* _thumbnailUrl;
	NSString* _userName;
	NSString* _cacheId;
	long long _loadState;

}
+(id)withContributionStoryPublisher:(id)arg1 ;
-(id)setSubtext:(id)arg1 ;
-(id)setThumbnailUrl:(id)arg1 ;
-(id)setLoadState:(long long)arg1 ;
-(id)setCacheId:(id)arg1 ;
-(id)setProfileDescription:(id)arg1 ;
-(id)setDisplayName:(id)arg1 ;
-(id)build;
-(id)setUserName:(id)arg1 ;
@end

