/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDate, SCCheetahStoriesClientScoringParams, NSOrderedSet;

@interface SCCheetahStoriesTabDataModelBuilder : NSObject {

	NSData* _streamToken;
	NSDate* _fetchedDate;
	SCCheetahStoriesClientScoringParams* _scoringParam;
	NSOrderedSet* _storyIndices;
	BOOL _hasMoreStories;

}
+(id)cheetahStoriesTabDataModel;
+(id)cheetahStoriesTabDataModelFromExistingCheetahStoriesTabDataModel:(id)arg1 ;
-(id)withStreamToken:(id)arg1 ;
-(id)withFetchedDate:(id)arg1 ;
-(id)withScoringParam:(id)arg1 ;
-(id)withStoryIndices:(id)arg1 ;
-(id)withHasMoreStories:(BOOL)arg1 ;
-(id)build;
@end

