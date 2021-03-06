/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
#import <Snapchat/Snapchat-Structs.h>
@class LSAComponentManager, SCUserSession, SCSentinel, NSMutableSet;

@interface SCGalleryLensProcessor : NSObject {

	LSAComponentManager* _componentManager;
	SCUserSession* _userSession;
	id<SCPerforming> _performer;
	SCSentinel* _sentinel;
	NSMutableSet* _currentlyProcessingItems;

}
+(id)errorWithCode:(unsigned long long)arg1 description:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 performer:(id)arg2 ;
-(void)startUpdatingData;
-(void)stopUpdatingData;
-(id)processEntry:(id)arg1 lens:(id)arg2 targetSize:(CGSize)arg3 mediaScenePath:(SCD_Struct_SC329)arg4 ;
-(id)initWithComponentManager:(id)arg1 userSession:(id)arg2 performer:(id)arg3 ;
-(id)initWithComponentManager:(id)arg1 userSession:(id)arg2 performer:(id)arg3 sentinel:(id)arg4 ;
-(id)_processInteractiveEntry:(id)arg1 lens:(id)arg2 targetSize:(CGSize)arg3 mediaScenePath:(SCD_Struct_SC329)arg4 ;
-(id)_processStaticEntry:(id)arg1 lens:(id)arg2 targetSize:(CGSize)arg3 mediaScenePath:(SCD_Struct_SC329)arg4 ;
-(id)_loadOriginalImageFromGalleryEntry:(id)arg1 targetSize:(CGSize)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 ;
-(id)_processImageWithCurrentLens:(id)arg1 processingMode:(long long)arg2 sentinelValue:(int)arg3 error:(id*)arg4 ;
-(id)_processEntry:(id)arg1 lens:(id)arg2 originalImageFuture:(id)arg3 processingBlock:(/*^block*/id)arg4 ;
-(id)_saveImageToTempFile:(id)arg1 error:(id*)arg2 ;
-(CGRect)_applyExternalImage:(id)arg1 imagePath:(id)arg2 sentinelValue:(int)arg3 error:(id*)arg4 ;
-(id)_activateLens:(id)arg1 sentinelValue:(int)arg2 ;
-(id)_requestImageForSnap:(id)arg1 cloudfile:(id)arg2 ;
-(id)_checkSentinelValue:(int)arg1 ;
-(void)dealloc;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
@end

