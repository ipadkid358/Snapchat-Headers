/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSNumber, NSLock;

@interface SCSnapcodeDataStore : NSObject {

	NSMutableDictionary* _snapcodeDataStore;
	NSMutableDictionary* _snapcodeSVGDataStore;
	NSNumber* _lastTotalCount;
	NSLock* _lockSVGDataStore;
	BOOL _fetchingData;

}

@property (nonatomic,readonly) long long snapcodeToDisplayCount; 
@property (nonatomic,readonly) BOOL fetchingData;                             //@synthesize fetchingData=_fetchingData - In the implementation block
+(void)removeSavedState;
+(id)sharedInstance;
+(id)path;
-(void)updateDataIfNecessary;
-(void)_ensureNonNilObjects;
-(void)updateData;
-(void)deleteSnapcode:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateSnapcode:(id)arg1 scannableInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)scannableSvgData:(id)arg1 snapcodeVersion:(int)arg2 ;
-(long long)snapcodeToDisplayCount;
-(BOOL)fetchingData;
-(id)scannableObjectsForKey:(id)arg1 ;
-(void)_sendFailureNotification:(id)arg1 ;
-(void)_removeScannableId:(id)arg1 ;
-(void)_updateScannableWithId:(id)arg1 scannable:(id)arg2 ;
-(id)scannableObjectFor:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)clear;
-(void)saveState;
@end

