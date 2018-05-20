/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchAttachmentsDataProviderListener.h>
#import <Snapchat/SCSearchCollectionViewSection.h>
#import <Snapchat/SCSearchEventAnnouncing.h>

@protocol SCSearchCollectionViewSectionDelegate, SCSearchIntentHandler, SCSearchActionHandling;
@class SCSearchSession, SCSearchAttachmentsDataProvider, SCSearchAttachmentsSectionConfiguration, NSArray, SCSearchEventListenerAnnouncer, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchCollectionViewSectionUpdateModel, NSString;

@interface SCSearchAttachmentsSection : NSObject <SCSearchAttachmentsDataProviderListener, SCSearchCollectionViewSection, SCSearchEventAnnouncing> {

	SCSearchSession* _searchSession;
	SCSearchAttachmentsDataProvider* _attachmentsProvider;
	SCSearchAttachmentsSectionConfiguration* _configuration;
	NSArray* _viewModels;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	SCSearchQueryStateAwareSupplementaryViewProvider* _queryStateAwareSupplementaryProvider;
	SCSearchCollectionViewSectionUpdateModel* _sectionUpdateModel;
	id<SCSearchCollectionViewSectionDelegate> _delegate;
	id<SCSearchIntentHandler> _intentHandler;
	long long _dataLoadingStatus;
	id<SCSearchActionHandling> _actionHandler;

}

@property (nonatomic,retain) id<SCSearchActionHandling> actionHandler;                                       //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) SCSearchCollectionViewSectionUpdateModel * sectionUpdateModel;                    //@synthesize sectionUpdateModel=_sectionUpdateModel - In the implementation block
@property (assign,nonatomic,__weak) id<SCSearchCollectionViewSectionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCSearchIntentHandler> intentHandler;                                 //@synthesize intentHandler=_intentHandler - In the implementation block
@property (assign,nonatomic) long long dataLoadingStatus;                                                    //@synthesize dataLoadingStatus=_dataLoadingStatus - In the implementation block
@property (nonatomic,retain) id<SCSearchCollectionViewSectionLayoutProviding> layoutCalculator; 
+(id)announcerIdentifier;
-(double)minimumSectionInteritemSpacing;
-(CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2 ;
-(id)reuseCellClassesByIdentifiers;
-(unsigned long long)numberOfCellsInSection;
-(id)cellForItemAtIndexInSection:(unsigned long long)arg1 ;
-(SCSearchCollectionViewSectionUpdateModel *)sectionUpdateModel;
-(void)setSectionUpdateModel:(SCSearchCollectionViewSectionUpdateModel *)arg1 ;
-(id<SCSearchIntentHandler>)intentHandler;
-(void)setIntentHandler:(id<SCSearchIntentHandler>)arg1 ;
-(long long)dataLoadingStatus;
-(void)setDataLoadingStatus:(long long)arg1 ;
-(id)supplementaryViewProvider;
-(void)collectionViewWillDisplayCell:(id)arg1 atIndexInSection:(unsigned long long)arg2 ;
-(double)minimumSectionLineSpacing;
-(void)_updateViewModels:(id)arg1 ;
-(id)initWithSearchSession:(id)arg1 dataProvider:(id)arg2 ;
-(void)attachmentDataDidUpdate:(id)arg1 ;
-(void)_updateSearchResult;
-(void)setDelegate:(id<SCSearchCollectionViewSectionDelegate>)arg1 ;
-(id<SCSearchCollectionViewSectionDelegate>)delegate;
-(void)tearDown;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setActionHandler:(id<SCSearchActionHandling>)arg1 ;
-(id<SCSearchActionHandling>)actionHandler;
-(void)applyConfiguration:(id)arg1 ;
-(void)setUp;
@end

