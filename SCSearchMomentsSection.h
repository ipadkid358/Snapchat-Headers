/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchActionHandling.h>
#import <Snapchat/SCSearchCollectionViewSection.h>

@protocol SCSearchCollectionViewSectionDelegate, SCSearchIntentHandler, SCSearchActionHandling;
@class SCSearchSession, SCSearchQueryStateAwareSupplementaryViewProvider, SCR2SearchSection, SCSearchCollectionViewSectionUpdateModel, NSString;

@interface SCSearchMomentsSection : NSObject <SCSearchActionHandling, SCSearchCollectionViewSection> {

	SCSearchSession* _searchSession;
	SCSearchQueryStateAwareSupplementaryViewProvider* _queryStateAwareSupplementaryProvider;
	SCR2SearchSection* _section;
	id<SCSearchCollectionViewSectionDelegate> _delegate;
	id<SCSearchIntentHandler> _intentHandler;
	SCSearchCollectionViewSectionUpdateModel* _sectionUpdateModel;
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
-(BOOL)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3 ;
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
-(double)minimumSectionLineSpacing;
-(id)initWithSearchSession:(id)arg1 ;
-(void)setDelegate:(id<SCSearchCollectionViewSectionDelegate>)arg1 ;
-(id<SCSearchCollectionViewSectionDelegate>)delegate;
-(void)setActionHandler:(id<SCSearchActionHandling>)arg1 ;
-(id<SCSearchActionHandling>)actionHandler;
-(void)applyConfiguration:(id)arg1 ;
@end

