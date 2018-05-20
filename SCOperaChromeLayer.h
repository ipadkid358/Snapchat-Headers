/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayer.h>

@protocol SCOperaViewProvider, SCOperaLabelTextProvider;
@class SCOperaPage, NSString, NSValue, NSTextAttachment, UIColor, UIFont, NSArray, NSDictionary;

@interface SCOperaChromeLayer : NSObject <SCOperaLayer> {

	BOOL _fadesOnDidFullyAppear;
	BOOL _shouldFadeInTextWithDelay;
	BOOL _hasGradient;
	BOOL _hasShadow;
	BOOL _fadeOutOnTransition;
	BOOL _includeInShare;
	BOOL _fadeOutSubtitleOnTransition;
	BOOL _showAvatarBackground;
	BOOL _showAvatarAddControl;
	SCOperaPage* _page;
	NSString* _displayName;
	NSString* _additionalDisplayName;
	NSString* _timestamp;
	NSValue* _timestampUnderlineRange;
	NSTextAttachment* _timestampIcon;
	UIColor* _displayNameColor;
	UIColor* _additionalDisplayNameColor;
	UIColor* _timestampColor;
	NSString* _displayNameIconImageName;
	UIFont* _displayNameFont;
	unsigned long long _hdState;
	NSArray* _gradientAlphaArray;
	double _gradientHeight;
	id<SCOperaViewProvider> _iconViewProvider;
	NSDictionary* _iconViewProviderProperties;
	id<SCOperaLabelTextProvider> _displayNameTextProvider;
	NSDictionary* _displayNameTextProviderProperties;
	NSString* _iconImageKey;

}

@property (assign,nonatomic,__weak) SCOperaPage * page;                                            //@synthesize page=_page - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * additionalDisplayName;                              //@synthesize additionalDisplayName=_additionalDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSValue * timestampUnderlineRange;                             //@synthesize timestampUnderlineRange=_timestampUnderlineRange - In the implementation block
@property (nonatomic,copy,readonly) NSTextAttachment * timestampIcon;                              //@synthesize timestampIcon=_timestampIcon - In the implementation block
@property (nonatomic,readonly) BOOL fadesOnDidFullyAppear;                                         //@synthesize fadesOnDidFullyAppear=_fadesOnDidFullyAppear - In the implementation block
@property (nonatomic,readonly) BOOL shouldFadeInTextWithDelay;                                     //@synthesize shouldFadeInTextWithDelay=_shouldFadeInTextWithDelay - In the implementation block
@property (nonatomic,readonly) UIColor * displayNameColor;                                         //@synthesize displayNameColor=_displayNameColor - In the implementation block
@property (nonatomic,readonly) UIColor * additionalDisplayNameColor;                               //@synthesize additionalDisplayNameColor=_additionalDisplayNameColor - In the implementation block
@property (nonatomic,readonly) UIColor * timestampColor;                                           //@synthesize timestampColor=_timestampColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayNameIconImageName;                           //@synthesize displayNameIconImageName=_displayNameIconImageName - In the implementation block
@property (nonatomic,readonly) UIFont * displayNameFont;                                           //@synthesize displayNameFont=_displayNameFont - In the implementation block
@property (nonatomic,readonly) BOOL hasGradient;                                                   //@synthesize hasGradient=_hasGradient - In the implementation block
@property (nonatomic,readonly) BOOL hasShadow;                                                     //@synthesize hasShadow=_hasShadow - In the implementation block
@property (nonatomic,readonly) BOOL fadeOutOnTransition;                                           //@synthesize fadeOutOnTransition=_fadeOutOnTransition - In the implementation block
@property (nonatomic,readonly) BOOL includeInShare;                                                //@synthesize includeInShare=_includeInShare - In the implementation block
@property (nonatomic,readonly) BOOL fadeOutSubtitleOnTransition;                                   //@synthesize fadeOutSubtitleOnTransition=_fadeOutSubtitleOnTransition - In the implementation block
@property (nonatomic,readonly) unsigned long long hdState;                                         //@synthesize hdState=_hdState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * gradientAlphaArray;                                  //@synthesize gradientAlphaArray=_gradientAlphaArray - In the implementation block
@property (nonatomic,readonly) double gradientHeight;                                              //@synthesize gradientHeight=_gradientHeight - In the implementation block
@property (nonatomic,readonly) id<SCOperaViewProvider> iconViewProvider;                           //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * iconViewProviderProperties;                     //@synthesize iconViewProviderProperties=_iconViewProviderProperties - In the implementation block
@property (nonatomic,readonly) id<SCOperaLabelTextProvider> displayNameTextProvider;               //@synthesize displayNameTextProvider=_displayNameTextProvider - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * displayNameTextProviderProperties;              //@synthesize displayNameTextProviderProperties=_displayNameTextProviderProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconImageKey;                                       //@synthesize iconImageKey=_iconImageKey - In the implementation block
@property (readonly) BOOL showAvatarBackground;                                                    //@synthesize showAvatarBackground=_showAvatarBackground - In the implementation block
@property (readonly) BOOL showAvatarAddControl;                                                    //@synthesize showAvatarAddControl=_showAvatarAddControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithProperties:(id)arg1 page:(id)arg2 ;
-(unsigned long long)hdState;
-(UIColor *)displayNameColor;
-(id)initWithProperties:(id)arg1 page:(id)arg2 ;
-(id<SCOperaLabelTextProvider>)displayNameTextProvider;
-(NSDictionary *)displayNameTextProviderProperties;
-(UIColor *)timestampColor;
-(NSString *)displayNameIconImageName;
-(NSArray *)gradientAlphaArray;
-(NSString *)additionalDisplayName;
-(NSValue *)timestampUnderlineRange;
-(NSTextAttachment *)timestampIcon;
-(UIColor *)additionalDisplayNameColor;
-(UIFont *)displayNameFont;
-(BOOL)fadeOutOnTransition;
-(BOOL)fadeOutSubtitleOnTransition;
-(BOOL)includeInShare;
-(NSString *)iconImageKey;
-(NSDictionary *)iconViewProviderProperties;
-(id<SCOperaViewProvider>)iconViewProvider;
-(BOOL)showAvatarBackground;
-(BOOL)showAvatarAddControl;
-(BOOL)shouldFadeInTextWithDelay;
-(BOOL)fadesOnDidFullyAppear;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)timestamp;
-(unsigned long long)type;
-(BOOL)hasShadow;
-(SCOperaPage *)page;
-(void)setPage:(SCOperaPage *)arg1 ;
-(NSString *)displayName;
-(double)gradientHeight;
-(BOOL)hasGradient;
@end

