/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCStoryLoggerListener.h>
#import <Snapchat/SCSnapLoggerListener.h>
#import <Snapchat/SCGallerySavingLoggerListener.h>

@class SCQueuePerformer, SCPreferences, NSDictionary, NSString;

@interface SCLensAnalyticsDataStore : NSObject <SCStoryLoggerListener, SCSnapLoggerListener, SCGallerySavingLoggerListener> {

	SCQueuePerformer* _performer;
	SCPreferences* _userPreferences;

}

@property (nonatomic,retain) SCQueuePerformer * performer;                    //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) SCPreferences * userPreferences;                 //@synthesize userPreferences=_userPreferences - In the implementation block
@property (nonatomic,retain) NSDictionary * lensesAnalyticsData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCQueuePerformer *)performer;
-(void)setPerformer:(SCQueuePerformer *)arg1 ;
-(id)initWithUserPreferences:(id)arg1 ;
-(void)gallerySavingLogger:(id)arg1 didLogGeofilterDirectSnapSaveEventForLensId:(id)arg2 ;
-(void)gallerySavingLogger:(id)arg1 didLogDirectSnapSaveEventForLensId:(id)arg2 ;
-(void)lensAnalyticsDataForLensId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)lensesAnalyticsData;
-(void)setLensAnalyticsData:(id)arg1 forLensId:(id)arg2 ;
-(void)setLensesAnalyticsData:(NSDictionary *)arg1 ;
-(void)updateStoryPostCountForLensId:(id)arg1 ;
-(void)updateSnapSendCountForLensId:(id)arg1 ;
-(void)updateSnapSaveCountForLensId:(id)arg1 ;
-(void)storyUsageLogger:(id)arg1 didLogStorySnapPostEvent:(id)arg2 ;
-(void)storyUsageLogger:(id)arg1 didLogGeoFilterStorySnapPostEvent:(id)arg2 ;
-(void)snapLogger:(id)arg1 didLogDirectSnapEvent:(id)arg2 ;
-(void)snapLogger:(id)arg1 didLogGeofilterDirectSnapSendEvent:(id)arg2 ;
-(SCPreferences *)userPreferences;
-(void)setUserPreferences:(SCPreferences *)arg1 ;
@end

