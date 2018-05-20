/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSnapAdsLoggingAdapter;
@class SCSnapAdsIdentifier, NSMutableDictionary;

@interface SCSnapAdsLogger : NSObject {

	SCSnapAdsIdentifier* _lastShownAdIdentifier;
	id<SCSnapAdsLoggingAdapter> _loggingAdapter;
	NSMutableDictionary* _resolvedAdDebuggingInfoDict;

}

@property (nonatomic,retain) id<SCSnapAdsLoggingAdapter> loggingAdapter;                     //@synthesize loggingAdapter=_loggingAdapter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resolvedAdDebuggingInfoDict;              //@synthesize resolvedAdDebuggingInfoDict=_resolvedAdDebuggingInfoDict - In the implementation block
@property (nonatomic,retain) SCSnapAdsIdentifier * lastShownAdIdentifier;                    //@synthesize lastShownAdIdentifier=_lastShownAdIdentifier - In the implementation block
+(id)shared;
-(void)e:(id)arg1 ;
-(void)i:(id)arg1 ;
-(void)v:(id)arg1 ;
-(void)d:(id)arg1 ;
-(void)w:(id)arg1 ;
-(void)setLoggerImpl:(id)arg1 ;
-(void)addResolvedAdDebuggingInfoWithAdIdentifier:(id)arg1 lineItemId:(id)arg2 adId:(id)arg3 ;
-(void)removeResolvedAdDebuggingInfoWithAdIdentifier:(id)arg1 ;
-(id)getLastShownAdLineItemId;
-(id)getLastShownAdAdId;
-(SCSnapAdsIdentifier *)lastShownAdIdentifier;
-(void)setLastShownAdIdentifier:(SCSnapAdsIdentifier *)arg1 ;
-(id<SCSnapAdsLoggingAdapter>)loggingAdapter;
-(void)setLoggingAdapter:(id<SCSnapAdsLoggingAdapter>)arg1 ;
-(NSMutableDictionary *)resolvedAdDebuggingInfoDict;
-(void)setResolvedAdDebuggingInfoDict:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
