/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCSearchCachedRequestManager, SCExperimentManager, NSArray, NSDate;

@interface SCSearchCandidateStoryTopicProvider : NSObject {

	SCSearchCachedRequestManager* _cachedRequestManager;
	SCExperimentManager* _experimentManager;
	NSArray* _topics;
	NSDate* _lastUpdatedDate;

}

@property (nonatomic,copy,readonly) NSArray * topics; 
@property (nonatomic,copy,readonly) NSDate * lastUpdatedDate;              //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
-(void)updateTopicsIfNeeded;
-(id)matchedTopicsForStoryCaption:(id)arg1 ;
-(id)matchedHighQualityTopicForStoryCaption:(id)arg1 ;
-(void)_reloadTopics;
-(id)_matchedTopicsForStoryCaption:(id)arg1 withNumberOfTopicsLimit:(unsigned long long)arg2 highQualityTopicsOnly:(BOOL)arg3 shouldAddQuotes:(BOOL)arg4 ;
-(void)_fetchOurStory;
-(void)_loadTopicsWithSharedStories:(id)arg1 ;
-(void)_handleCachedResponse:(id)arg1 request:(id)arg2 shouldInvalidateCachedData:(BOOL*)arg3 ;
-(void)_updateWithTopics:(id)arg1 updatedDate:(id)arg2 ;
-(id)initWithSessionRequestManager:(id)arg1 experimentManager:(id)arg2 ;
-(id)topicsSuffix;
-(NSDate *)lastUpdatedDate;
-(NSArray *)topics;
@end

