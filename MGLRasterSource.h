/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/MGLTileSource.h>

@interface MGLRasterSource : MGLTileSource

@property (nonatomic,readonly) RasterSource* rawSource; 
-(id)initWithIdentifier:(id)arg1 configurationURL:(id)arg2 tileSize:(double)arg3 ;
-(RasterSource*)rawSource;
-(id)initWithIdentifier:(id)arg1 configurationURL:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 tileURLTemplates:(id)arg2 options:(id)arg3 ;
-(id)attributionHTMLString;
-(id)configurationURL;
@end

