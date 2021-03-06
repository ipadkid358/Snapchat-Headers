/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLocationDataController.h>

@protocol SCLocationDataControllerDelegate;
@class SCWeather, CLLocation, NSDate, NSString;

@interface SCLocationWeatherController : NSObject <SCLocationDataController> {

	SCWeather* _cachedWeather;
	CLLocation* _lastUpdatedLocation;
	NSDate* _lastUpdatedTimestamp;
	id<SCLocationDataControllerDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCLocationDataControllerDelegate> delegate; 
-(void)processResponse:(id)arg1 location:(id)arg2 ;
-(void)updateCacheWithLocation:(id)arg1 newSession:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SCLocationDataControllerDelegate>)arg1 ;
-(id<SCLocationDataControllerDelegate>)delegate;
-(void)clearCache;
@end

