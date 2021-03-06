/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchQueryCoordinating.h>
#import <Snapchat/SCSearchEventAnnouncing.h>

@protocol SCSendPreviewViewModel;
@class SCSendToConfiguration, SCCheetahSendToRecipientDataProvider, SCCheetahSendToStoryDataSource, SCSearchEventListenerAnnouncer, SCCheetahSendToLogger, SCSearchQuery, SCSearchNavigationCoordinator, NSString;

@interface SCCheetahSendToSearchQueryCoordinator : NSObject <SCSearchQueryCoordinating, SCSearchEventAnnouncing> {

	SCSendToConfiguration* _configuration;
	SCCheetahSendToRecipientDataProvider* _recipientDataProvider;
	SCCheetahSendToStoryDataSource* _storyDataProvider;
	id<SCSendPreviewViewModel> _previewMediaSource;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	SCCheetahSendToLogger* _logger;
	long long _sectionOrder;
	BOOL _isLoading;
	SCSearchQuery* _currentQuery;
	SCSearchNavigationCoordinator* _navigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isLoading;                                                          //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) SCSearchQuery * currentQuery;                                                //@synthesize currentQuery=_currentQuery - In the implementation block
@property (assign,nonatomic,__weak) SCSearchNavigationCoordinator * navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
+(id)announcerIdentifier;
-(SCSearchNavigationCoordinator *)navigationCoordinator;
-(void)resultsForQuery:(id)arg1 updatingBlock:(/*^block*/id)arg2 ;
-(BOOL)canPerformQuery:(id)arg1 ;
-(void)setNavigationCoordinator:(SCSearchNavigationCoordinator *)arg1 ;
-(id)initWithConfiguration:(id)arg1 recipientDataProvider:(id)arg2 storyDataProvider:(id)arg3 previewMediaSource:(id)arg4 logger:(id)arg5 ;
-(BOOL)showDefaultOrder;
-(void)_addDefaultSectionOrder:(id)arg1 sectionDescriptors:(id)arg2 ;
-(void)_addSectionsBasedOnExperimentSectionOrder:(id)arg1 sectionDescriptors:(id)arg2 ;
-(void)_announceSectionsOrder:(id)arg1 ;
-(BOOL)isLoading;
-(void)addListener:(id)arg1 ;
-(void)setCurrentQuery:(SCSearchQuery *)arg1 ;
-(SCSearchQuery *)currentQuery;
-(void)removeListener:(id)arg1 ;
@end

