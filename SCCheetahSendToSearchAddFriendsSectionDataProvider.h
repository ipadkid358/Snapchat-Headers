/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchUpdateListener.h>
#import <Snapchat/SCSearchEventListener.h>
#import <Snapchat/SCSearchSectionDataProviding.h>

@protocol SCSearchSectionDataProvidingDelegate, NSCopying, SCPerforming;
@class SCSearchEventListenerAnnouncer, SCUserSession, SCCheetahSendToRecipientDataProvider, SCSendToSelectionStateManager, NSString, NSObject;

@interface SCCheetahSendToSearchAddFriendsSectionDataProvider : NSObject <SCSearchUpdateListener, SCSearchEventListener, SCSearchSectionDataProviding> {

	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	SCUserSession* _userSession;
	SCCheetahSendToRecipientDataProvider* _dataProvider;
	SCSendToSelectionStateManager* _selectionStateManager;
	NSString* _lastQueryText;
	long long _dataLoadingStatus;
	id<SCSearchSectionDataProvidingDelegate> _dataProviderDelegate;
	NSObject*<NSCopying> _sectionDataModel;
	id<SCPerforming> _updateQueuePerformer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCSearchSectionDataProvidingDelegate> dataProviderDelegate;              //@synthesize dataProviderDelegate=_dataProviderDelegate - In the implementation block
@property (nonatomic,copy) NSObject*<NSCopying> sectionDataModel;                                               //@synthesize sectionDataModel=_sectionDataModel - In the implementation block
@property (nonatomic,retain) id<SCPerforming> updateQueuePerformer;                                             //@synthesize updateQueuePerformer=_updateQueuePerformer - In the implementation block
+(id)announcerIdentifier;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
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
-(void)_configureRecipientCollectionViewCell:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 dataProvider:(id)arg2 selectionStateManager:(id)arg3 ;
-(id)_searchContainerCellViewModel:(id)arg1 ;
-(void)_fetchResultsForQuery:(id)arg1 ;
-(void)_updateSectionModelForQuery:(id)arg1 contactSnapchatters:(id)arg2 searchedUser:(id)arg3 ;
-(void)_didSearchQuery:(id)arg1 results:(id)arg2 searchedUser:(id)arg3 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

