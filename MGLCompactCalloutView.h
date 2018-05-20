/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/MGLSMCalloutView.h>
#import <Snapchat/MGLCalloutView.h>

@protocol MGLAnnotation;
@class UIView, NSString;

@interface MGLCompactCalloutView : MGLSMCalloutView <MGLCalloutView> {

	id<MGLAnnotation> _representedObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<MGLAnnotation> representedObject;                                    //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,retain) UIView * leftAccessoryView; 
@property (nonatomic,retain) UIView * rightAccessoryView; 
@property (assign,nonatomic,__weak) id<MGLCalloutViewDelegate> delegate; 
@property (getter=isAnchoredToAnnotation,nonatomic,readonly) BOOL anchoredToAnnotation; 
@property (nonatomic,readonly) BOOL dismissesAutomatically; 
+(id)platformCalloutView;
-(BOOL)dismissesAutomatically;
-(BOOL)isAnchoredToAnnotation;
-(id<MGLAnnotation>)representedObject;
-(void)setRepresentedObject:(id<MGLAnnotation>)arg1 ;
@end
