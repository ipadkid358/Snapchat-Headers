/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class SCCheetahStoriesGroupStoryFeatureExtractor, SCCheetahStoriesInteractionHistoryFeatureExtractor, SCUserSession, SCCheetahFeedAst, SCQueuePerformer, NSString;

@interface SCCheetahStoriesRanker : NSObject {

	SCCheetahStoriesGroupStoryFeatureExtractor* _groupStoryFeatureExtractors;
	SCCheetahStoriesInteractionHistoryFeatureExtractor* _interactionHistoryFeatureExtractors;
	SCUserSession* _userSession;
	SCAstVMRef _astVM;
	SCCheetahFeedAst* _ast;
	SCQueuePerformer* _performer;
	NSString* _storyReorderingDebugHtml;

}
+(id)announcerIdentifier;
-(id)initWithUserSession:(id)arg1 ;
-(id)reorderStories:(id)arg1 scoringParams:(id)arg2 isPullToRefresh:(BOOL)arg3 isLocalReranking:(BOOL)arg4 ;
-(id)_performReorderStories:(id)arg1 scoringParams:(id)arg2 isPullToRefresh:(BOOL)arg3 isLocalReranking:(BOOL)arg4 ;
-(id)_extractRankingFeatures:(id)arg1 scoringParams:(id)arg2 groupStoryStartScore:(float)arg3 isPullToRefresh:(BOOL)arg4 isLocalReranking:(BOOL)arg5 ;
-(id)_appendDebugInfoToStory:(id)arg1 debugHtmlInfo:(id)arg2 reRankedPosition:(unsigned long long)arg3 ;
-(id)storyReorderingDebugHtml;
-(void)dealloc;
@end

