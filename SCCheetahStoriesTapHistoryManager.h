/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCQueuePerformer, SCPreferences, NSNumber;

@interface SCCheetahStoriesTapHistoryManager : NSObject {

	SCQueuePerformer* _performer;
	SCPreferences* _userPreferences;
	NSNumber* _tappedStoryKey;

}
-(id)initWithUserSession:(id)arg1 ;
-(void)storyTappedWithStoryKey:(id)arg1 ;
-(void)viewedStoryKey:(id)arg1 withViewDuration:(double)arg2 ;
-(void)_storyTappedWithStoryKey:(id)arg1 ;
-(void)_viewedStoryKey:(id)arg1 withViewDuration:(double)arg2 ;
-(id)_recentStoryKeys;
-(void)_overrideHistoryWith:(id)arg1 ;
-(id)_storyKeys;
-(void)fetchLastTappedStoriesWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)overrideHistoryWithStoryKeys:(id)arg1 ;
@end
