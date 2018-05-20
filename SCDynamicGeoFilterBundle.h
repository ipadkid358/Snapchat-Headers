/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCDynamicGeofilterRenderable.h>

@class NSMutableDictionary, NSString;

@interface SCDynamicGeoFilterBundle : NSObject <SCDynamicGeofilterRenderable> {

	NSMutableDictionary* resourceMap;
	NSString* _bundleKey;

}

@property (nonatomic,copy,readonly) NSString * bundleKey;              //@synthesize bundleKey=_bundleKey - In the implementation block
+(id)bundleKeyWithTextResource:(id)arg1 ;
-(id)initWithTextResouce:(id)arg1 ;
-(NSString *)bundleKey;
-(BOOL)mergeWithBundle:(id)arg1 ;
-(void)getUIImagesWithCanvasSize:(CGSize)arg1 completion:(/*^block*/id)arg2 contextData:(id)arg3 dynamicContextProperties:(id)arg4 ;
-(id)_bundleUrl;
@end

