/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchUpdateListener.h>
#import <Snapchat/SCSearchSectionDataProviding.h>

@protocol SCSearchSectionDataProvidingDelegate, NSCopying, SCPerforming;
@class SCExperimentManager, SCSearchStoriesPresenter, SCSearchImageDownloader, SCSearchVideoDownloader, SCSearchStreamingCompositeDownloader, SCUserSession, SCSearchEventListenerAnnouncer, NSObject, NSString;

@interface SCSearchStorySectionDataProvider : NSObject <SCSearchUpdateListener, SCSearchSectionDataProviding> {

	SCExperimentManager* _experimentManager;
	SCSearchStoriesPresenter* _storiesPresenter;
	SCSearchImageDownloader* _imageDownloader;
	SCSearchVideoDownloader* _videoDownloader;
	SCSearchStreamingCompositeDownloader* _streamingCompositeDownloader;
	SCUserSession* _userSession;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	BOOL _needsStoryCardContextForViewModels;
	BOOL _shouldUseSectionAsIndex;
	id<SCSearchSectionDataProvidingDelegate> _dataProviderDelegate;
	NSObject*<NSCopying> _sectionDataModel;
	id<SCPerforming> _updateQueuePerformer;

}

@property (assign,nonatomic) BOOL shouldUseSectionAsIndex;                                                      //@synthesize shouldUseSectionAsIndex=_shouldUseSectionAsIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCSearchSectionDataProvidingDelegate> dataProviderDelegate;              //@synthesize dataProviderDelegate=_dataProviderDelegate - In the implementation block
@property (nonatomic,copy) NSObject*<NSCopying> sectionDataModel;                                               //@synthesize sectionDataModel=_sectionDataModel - In the implementation block
@property (nonatomic,retain) id<SCPerforming> updateQueuePerformer;                                             //@synthesize updateQueuePerformer=_updateQueuePerformer - In the implementation block
+(id)announcerIdentifier;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(void)setDataProviderDelegate:(id<SCSearchSectionDataProvidingDelegate>)arg1 ;
-(void)setUpdateQueuePerformer:(id<SCPerforming>)arg1 ;
-(id)contentCellClassesByReuseIdentifier;
-(id)configurationBlocksByReuseIdentifier;
-(void)setSectionDataModel:(NSObject*<NSCopying>)arg1 ;
-(void)containerCellViewModelsForIndexPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSObject*<NSCopying>)sectionDataModel;
-(long long)dataLoadingStatus;
-(id<SCSearchSectionDataProvidingDelegate>)dataProviderDelegate;
-(id<SCPerforming>)updateQueuePerformer;
-(id)initWithUserSession:(id)arg1 storiesPresenter:(id)arg2 ;
-(void)setShouldUseSectionAsIndex:(BOOL)arg1 ;
-(void)_handleSubscribeCallbackForDynamicStory:(id)arg1 isSubscribed:(BOOL)arg2 ;
-(void)_updateSectionDataModelDynamicStory:(id)arg1 withIsSubscribed:(BOOL)arg2 ;
-(void)_applyContainerCellViewModelsForIndexPath:(id)arg1 storyCardContext:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_configureStoryCardCollectionViewCell:(id)arg1 withCellClass:(Class)arg2 ;
-(id)_containerViewModelForDynamicStory:(id)arg1 storyCardContext:(id)arg2 sectionType:(id)arg3 resultRankingId:(id)arg4 storyCardColorTheme:(id)arg5 ;
-(BOOL)shouldUseSectionAsIndex;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

