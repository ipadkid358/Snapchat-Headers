/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSOrderedSet;

@interface SCXSpriteCluster : NSObject {

	BOOL _selected;
	NSOrderedSet* _sprites;
	CLLocationCoordinate2D _center;

}

@property (nonatomic,readonly) NSOrderedSet * sprites;                     //@synthesize sprites=_sprites - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D center;              //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) BOOL selected;                              //@synthesize selected=_selected - In the implementation block
-(NSOrderedSet *)sprites;
-(id)initWithSprites:(id)arg1 center:(CLLocationCoordinate2D)arg2 selected:(BOOL)arg3 ;
-(void)writeToSprites:(id)arg1 ;
-(CLLocationCoordinate2D)center;
-(BOOL)selected;
@end
