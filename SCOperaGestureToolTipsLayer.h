/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayer.h>

@class SCOperaPage, NSArray, NSString;

@interface SCOperaGestureToolTipsLayer : NSObject <SCOperaLayer> {

	SCOperaPage* _page;
	NSArray* _supportedGestures;
	NSString* _title;

}

@property (assign,nonatomic,__weak) SCOperaPage * page;                  //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) NSArray * supportedGestures;              //@synthesize supportedGestures=_supportedGestures - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithProperties:(id)arg1 page:(id)arg2 ;
-(id)initWithProperties:(id)arg1 page:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(unsigned long long)type;
-(SCOperaPage *)page;
-(void)setPage:(SCOperaPage *)arg1 ;
-(NSArray *)supportedGestures;
@end
