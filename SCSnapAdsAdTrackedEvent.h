/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsBaseEvent.h>

@protocol SCAdSource;
@class SCSnapAdsIdentifier;

@interface SCSnapAdsAdTrackedEvent : SCSnapAdsBaseEvent {

	SCSnapAdsIdentifier* _adIdentifier;
	id<SCAdSource> _adSource;

}

@property (nonatomic,retain) SCSnapAdsIdentifier * adIdentifier;              //@synthesize adIdentifier=_adIdentifier - In the implementation block
@property (nonatomic,retain) id<SCAdSource> adSource;                         //@synthesize adSource=_adSource - In the implementation block
-(SCSnapAdsIdentifier *)adIdentifier;
-(void)setAdIdentifier:(SCSnapAdsIdentifier *)arg1 ;
-(id<SCAdSource>)adSource;
-(void)setAdSource:(id<SCAdSource>)arg1 ;
@end

