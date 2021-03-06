/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/LSALensAnalyticsDataComponentDelegate.h>

@class SCLensAnalyticsDataStore, LSALensAnalyticsDataComponent, NSString;

@interface SCLensAnalyticsDataManger : NSObject <LSALensAnalyticsDataComponentDelegate> {

	SCLensAnalyticsDataStore* _lensAnalyticsDataStore;
	LSALensAnalyticsDataComponent* _lensAnalyticsDataComponent;

}

@property (nonatomic,retain) SCLensAnalyticsDataStore * lensAnalyticsDataStore;                       //@synthesize lensAnalyticsDataStore=_lensAnalyticsDataStore - In the implementation block
@property (nonatomic,retain) LSALensAnalyticsDataComponent * lensAnalyticsDataComponent;              //@synthesize lensAnalyticsDataComponent=_lensAnalyticsDataComponent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(LSALensAnalyticsDataComponent *)lensAnalyticsDataComponent;
-(void)lensDataComponent:(id)arg1 didRequestLensDataForEffectId:(id)arg2 ;
-(SCLensAnalyticsDataStore *)lensAnalyticsDataStore;
-(id)initWithLensAnalyticsDataComponent:(id)arg1 lensAnalyticsDataStore:(id)arg2 ;
-(void)setLensAnalyticsDataStore:(SCLensAnalyticsDataStore *)arg1 ;
-(void)setLensAnalyticsDataComponent:(LSALensAnalyticsDataComponent *)arg1 ;
@end

