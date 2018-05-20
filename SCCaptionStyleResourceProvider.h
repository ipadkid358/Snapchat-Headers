/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol SCCaptionResourceProviderDelegate;
@class NSNumber, NSDate, SCUserSession, SCQueuePerformer, SCCache, NSMutableDictionary, SOJUCaptionStyles, NSMutableSet, NSString, NSArray;

@interface SCCaptionStyleResourceProvider : NSObject <NSCoding> {

	NSNumber* _captionStyleVersion;
	NSDate* _lastCheckingTimestamp;
	SCUserSession* _userSession;
	SCQueuePerformer* _performer;
	SCCache* _cache;
	NSMutableDictionary* _captionStyleMetadata;
	SOJUCaptionStyles* _downloadedCaptionStyles;
	BOOL _isFetchingRemoteResource;
	BOOL _needToUpdateAvailableCaptionStyles;
	NSMutableSet* _registeredFonts;
	NSString* _locale;
	id<SCCaptionResourceProviderDelegate> _delegate;
	NSArray* _availableCaptionStyles;
	double _currentControllerVersion;

}

@property (assign,nonatomic,__weak) id<SCCaptionResourceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * availableCaptionStyles;                                   //@synthesize availableCaptionStyles=_availableCaptionStyles - In the implementation block
@property (assign) double currentControllerVersion;                                              //@synthesize currentControllerVersion=_currentControllerVersion - In the implementation block
-(void)loadDependencyOfCaptionStyles:(id)arg1 completeBlock:(/*^block*/id)arg2 ;
-(void)setCurrentControllerVersion:(double)arg1 ;
-(NSArray *)availableCaptionStyles;
-(id)defaultCaptionStyles;
-(void)updateCaptionStylesIfNecessary;
-(long long)countOfDefaultStyle;
-(void)resetDownloader;
-(void)_registerFont:(id)arg1 collectorBlock:(/*^block*/id)arg2 ;
-(void)_cacheFontFile:(id)arg1 forKey:(id)arg2 ;
-(void)_fetchOnDemandTypefaceWithURLString:(id)arg1 completeBlock:(/*^block*/id)arg2 ;
-(BOOL)_isCaptionStyleResourceTTLExpired;
-(void)_updateAvailableCaptionStylesIfNecessary:(id)arg1 controllerVersion:(double)arg2 ;
-(void)_fetchCaptionStyleResourceWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)prepareCaptionStyle:(id)arg1 completeBlock:(/*^block*/id)arg2 ;
-(void)_updateLastCheckingTimestamp;
-(id)initWithUserSession:(id)arg1 captionCache:(id)arg2 ;
-(unsigned long long)indexOfStyleInAvailableArray:(id)arg1 ;
-(void)setAvailableCaptionStyles:(NSArray *)arg1 ;
-(double)currentControllerVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SCCaptionResourceProviderDelegate>)arg1 ;
-(id<SCCaptionResourceProviderDelegate>)delegate;
@end

