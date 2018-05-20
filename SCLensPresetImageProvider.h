/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLensSubPickerImageProviderProtocol.h>

@protocol SCLensSubPickerImageProviderDelegate;
@class LSAPresetsComponent, NSArray, NSString;

@interface SCLensPresetImageProvider : NSObject <SCLensSubPickerImageProviderProtocol> {

	LSAPresetsComponent* _presetsComponent;
	id<SCLensSubPickerImageProviderDelegate> _delegate;
	NSArray* _previewPaths;
	BOOL _presetsLoading;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelImageLoadingWithId:(id)arg1 ;
-(BOOL)canProcessMoreImages;
-(void)processMoreImagesIfPossibleWithSize:(CGSize)arg1 count:(unsigned long long)arg2 ;
-(id)imageIdentifierAtIndex:(unsigned long long)arg1 ;
-(void)warmupWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfImageWithIdentifier:(id)arg1 ;
-(id)getPreviewImageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)processMoreImagesIfPossibleWithSize:(CGSize)arg1 count:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPresetComponent:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(unsigned long long)imageCount;
-(void)cooldown;
@end
